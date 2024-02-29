#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints a reverse string.
 * Description: function that prints a reverse string.
 * @str: chaine de caracteres "My School".
 * Return: blabla
 */
void puts_half(char *str)
{
	int length = 0, half, i;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	half = length / 2;
	if ((length % 2) > 0)
	{
		half++;
	}

	for (i = half; i < length; i++)
	{
		str--;
	}

	for (i = half; i < length; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
