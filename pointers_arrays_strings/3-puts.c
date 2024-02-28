#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line.
 * Description: function that prints a string, followed by a new line.
 * @s: chaine de caracteres
 * Return: length of s
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
