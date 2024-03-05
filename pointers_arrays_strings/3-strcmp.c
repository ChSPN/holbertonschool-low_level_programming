#include "main.h"

/**
 * _strcmp - function that compare two strings
 * Description: function that compare two strings
 * @s1: char pointer dest
 * @s2: char pointer src
 * Return: result of compare
 */
int _strcmp(char *s1, char *s2)
{
	/* Boucle jusqu'au char de fin et que les valeurs s1 et s2 soient égales. */
	while (*s1 != '\0' && *s1 == *s2)
	{
		/* Incremntation des adresses mémoires. */
		s1++;
		s2++;
	}

	/* Test des valeurs. */
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		/* Opération sur les valeurs ASCII. */
		return (*s1 - *s2);
	}
}
