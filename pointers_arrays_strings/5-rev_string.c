#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a reverse string.
 * rev_print - function that displays the string in reverse.
 * _putchar - function that displays the string in reverse.
 * Description: function that prints a reverse string.
 * @s: chaine de caracteres "My School".
 * Return: blabla
 */
void rev_string(char *s)
{
if (*s > '\0')
{
	rev_string(s + 1);
	_putchar(*s);
}
else
{
	_putchar ('\n');
}
}
