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
	int size = 1;

	if (str == NULL)
		return (s);

	do {
		size++;
		str++;
	} while (*str != '\0');

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = size - 1; i >= 0; i--)
	{
		s[i] = *str;
		str--;
	}

	return (s);
}
