#include "main.h"

/**
 * print_triangle - print a triangle in the terminal
 * @size: size of the character # should be printed
 */
void print_triangle(int size)
{
	int i, j, d;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (d = size - i; d >= 0; d--)
				_putchar(' ');
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

