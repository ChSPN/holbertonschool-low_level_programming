#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "Requiescat"

/**
 * read_textfile - Reads a text file and prints its content to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of characters to read and print.
 *
 * Description: This function reads a text file specified by its name
 *              and prints its content to the POSIX standard output (usually the terminal).
 *
 * Return: The actual number of characters read and printed to the standard output.
 *         0 on error or if the file cannot be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters) 
	{
	ssize_t fd, read_bytes, written_bytes, total_written = 0;
	char *buffer;

    /* Check if filename is NULL */
	if (filename == NULL)
		return (0);

    /* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

    /* Allocate memory for the read buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) {
		close(fd);
		return (0);
	}

    /* Read data from the file */
	while ((read_bytes = read(fd, buffer, letters)) > 0) {
		/* Write the read data to the standard output */
		written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
		if (written_bytes == -1 || written_bytes != read_bytes) {
			free(buffer);
			close(fd);
			return (total_written); /* Return the total written before the failure */
		}
		total_written += written_bytes;
	}

    /* Check if an error occurred during reading */
	if (read_bytes == -1) {
		free(buffer);
		close(fd);
		return (0);
	}

    /* Close the file descriptor and free allocated memory */
	free(buffer);
	close(fd);

    /* Return the total number of characters read and printed */
	return (total_written);
}