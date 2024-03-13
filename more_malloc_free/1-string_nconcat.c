#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * check the code
 * @s1: string one
 * @s2: string two
 * @n: number of string two
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s = NULL;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

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
	while (*s2 != '\0')
	{
		size2++;
		s2++;
	}

	s2--;
	while (n < size2)
	{
		size2--;
		s2--;
	}

	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == NULL)
		return (NULL);

	for (i = size1; i > 0; i--)
	{
		s[i - 1] = *s1;
		s1--;
	}

	for (i = size1 + size2 - 1; i >= size1; i--)
	{
		s[i] = *s2;
		s2--;
	}

	s[size1 + size2] = '\0';
	return (s);
}
