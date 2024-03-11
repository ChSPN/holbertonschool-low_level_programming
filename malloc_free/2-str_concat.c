#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - string concate
 * Description: string concate
 * @s1: string one
 * @s2: string two
 * Return: string concate.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *s = NULL;
	int size1 = 0;
	int size2 = 1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
	{
		size1++;
		s1++;
	}

	s1--;
	do {
		size2++;
		s2++;
	} while (*s2 != '\0');

	s = malloc(sizeof(char) * (size1 + size2));
	if (s == NULL)
		return (NULL);

	for (i = size1 - 1; i >= 0; i--)
	{
		s[i] = *s1;
		s1--;
	}

	for (i = size1 + size2 - 1; i >= size1; i--)
	{
		s[i] = *s2;
		s2--;
	}

	return (s);
}
