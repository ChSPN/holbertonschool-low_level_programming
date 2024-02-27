#include "_putchar.c"

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
			_putchar(' ');
		}

		if ((i % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if ((i % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
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
				_putchar((i / 10) + '0');
			}

			_putchar(r + '0');
		}
	}

	_putchar('\n');
	return (0);
}
