#include "main.h"

/**
 * print_diagonal - print a diagonal on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n > 0)
	{
		k = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
