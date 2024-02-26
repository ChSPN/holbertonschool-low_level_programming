#include "main.h"

/**
 * print_square - print a square in the terminal
 * @size: size of the character # should be printed
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
	}

	_putchar('\n');
}
