#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the lenght of a string
 * Description: function that returns the lenght of a string
 * @s: chaine de caracteres
 * Return: length of s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
