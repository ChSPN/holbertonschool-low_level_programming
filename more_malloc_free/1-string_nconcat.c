#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - string len
 * @s: string
 *
 * Return: int len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

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
	unsigned int i, size1 = 0, size2 = 0;
	char *s = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n < size2)
		size2 = n;
	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		s[i] = *s1;
		s1++;
	}
	for (i = size1; i < size1 + size2; i++)
	{
		s[i] = *s2;
		s2++;
	}
	s[size1 + size2] = '\0';
	return (s);
}
