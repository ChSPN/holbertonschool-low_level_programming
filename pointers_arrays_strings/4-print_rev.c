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
if (*s > '\0')
{
	print_rev(s + 1);
	_putchar(*s);
}
else
{
	_putchar ('\n');
}
}
