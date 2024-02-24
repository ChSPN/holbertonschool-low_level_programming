#include "main.h"

/**
 * times_table - void times_table
 *
 * Description: 'the program's description'
 *
 * Return: void
 */
void times_table(void)
{
	int l, c, r;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			r = l * c;
			if (c > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
				{
					_putchar(' ');
					_putchar(r + '0');
				}
				else
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			else
			{
				_putchar(r + '0');
			}
		}

		_putchar('\n');
	}
}
