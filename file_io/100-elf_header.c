#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s's complement, %s endian\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    const char *osabi = (header->e_ident[EI_OSABI] == ELFOSABI_NONE) ? "UNIX - System V" : "<unknown>";
    printf(" OS/ABI: %s\n", osabi);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s (%s file)\n",
           header->e_type == ET_NONE ? "NONE (Unknown)" :
           header->e_type == ET_REL ? "REL (Relocatable file)" :
           header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           header->e_type == ET_DYN ? "DYN (Shared object file)" :
           header->e_type == ET_CORE ? "CORE (Core file)" :
           "<unknown>",
           header->e_type == ET_NONE ? "None" :
           header->e_type == ET_REL ? "Relocatable" :
           header->e_type == ET_EXEC ? "Executable" :
           header->e_type == ET_DYN ? "Shared object" :
           header->e_type == ET_CORE ? "Core" :
           "<unknown>");
    printf("  Entry point address:               %#lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header) ||
        header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    print_elf_header(&header);

    close(fd);
    return (0);
}
