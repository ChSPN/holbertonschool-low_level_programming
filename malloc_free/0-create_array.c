#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the size of the memory to print
 * @c: character
 * Return: pointer of array char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = NULL;

	if (size != 0)
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}

	return (s);
}
