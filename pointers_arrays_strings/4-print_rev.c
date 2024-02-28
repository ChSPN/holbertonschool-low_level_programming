#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a reverse string, followed by a new line.
 * Description: function that prints a reverse string, followed by a new line.
 * @s: chaine de caracteres
 * Return: blabla
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (i = 0; i < count; i++)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
