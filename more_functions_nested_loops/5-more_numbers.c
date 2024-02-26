#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j, r;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				r = i;
			}
			else
			{
				r = i % 10;
				_putchar((i / 10) + '0');
			}

			_putchar(r + '0');
		}

		_putchar('\n');
	}
}
