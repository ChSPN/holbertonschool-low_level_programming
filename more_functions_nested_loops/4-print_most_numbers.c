#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9, whitout 2 and 4
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}

		c++;
	}

	_putchar('\n');
}























