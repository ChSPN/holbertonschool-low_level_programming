#include "stdio.h"

/**
 * main - print the numbers from 1 to 100
 * Return: Zero
 */
int main(void)
{
	int i, r, mod3, mod5;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
			putchar(' ');
		mod3 = i % 3;
		if (mod3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		mod5 = i % 5;
		if (mod5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		if (mod3 != 0 && mod5 != 0)
		{
			if (i < 10)
				r = i;
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
