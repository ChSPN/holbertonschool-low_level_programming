#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * Description: function that prints every other character of a string
 * @str: chaine de caracteres "0123456789".
 * Return: blabla
 */
void puts2(char *str)
{
	int length = 0, value;

	while (*str != '\0')
	{
		value = *str + 0;
		if (length == 0 || (value % 2) == 0)
		{
			_putchar(*str);
		}

		length++;
	   	str++;
	}

	_putchar('\n');
}
