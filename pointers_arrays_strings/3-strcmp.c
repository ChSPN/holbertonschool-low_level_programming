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
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
