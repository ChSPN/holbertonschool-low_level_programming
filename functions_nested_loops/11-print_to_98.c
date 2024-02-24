#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the n
 * Description: 'the program's description'
 * Return: int
 */
void print_to_98(int n)
{
	int i, m, r;

	if (n != 98)
	{
		if (n < 98)
			i = 1;
		else
			i = -1;
		for (m = n; m != 98; m += i)
		{
			if (m != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m < 0)
			{
				r = m * -1;
				_putchar('-');
			}
			else
				r = m;
			if (r >= 100)
				_putchar((r / 100) + '0');
			if (r >= 10)
				_putchar(((r / 10) % 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
