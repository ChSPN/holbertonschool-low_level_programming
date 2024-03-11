#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string
 * Description - copy string.
 * @str: string to copy
 * Return: pointer of string.
 */
char *_strdup(char *str)
{
	int i;
	char *s = NULL;
	int size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}

	if (size != 0)
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
			return (NULL);

		for (i = size; i >= 0; i--)
		{
			s[i] = *str;
			str--;
		}
	}

	return (s);
}
