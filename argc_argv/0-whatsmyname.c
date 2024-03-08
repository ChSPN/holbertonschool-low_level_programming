#include <stdio.h>
#include "main.h"

/**
 * main - programme de base
 * Description: program that prints its name, followed by a new line
 * @argc: taille du tableau argv
 * @argv: arguments fournis au programme
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
