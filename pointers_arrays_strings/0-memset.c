#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @buffer: the address of memory to print
 * @b: constant
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *_memset(char *buffer, char b, unsigned int size)
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		*buffer = b;
		buffer++;
	}

	for (i = 0; i < size; i++)
	{
		buffer--;
	}

	return (buffer);
}
