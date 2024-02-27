#include "stdio.h"

/**
 * main - print the numbers from 1 to 100
 * Return: Zero
 */
int main(void)
{
	int i, r;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
			putchar(' ');
		}

		if ((i % 3) == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if ((i % 5) == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (i < 10)
			{
				r = i;
			}
			else
			{
				r = i % 10;
				putchar((i / 10) + '0');
			}

			putchar(r + '0');
		}
	}

	putchar('\n');
	return (0);
}
