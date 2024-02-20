#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit[] = "0123456789";
	int index;

	for (index = 0; index <= 9; index++)
	{
		if (index > 0)
		{
			putchar(',');
			putchar(' ');
		}

		putchar(digit[index]);
	}

	putchar('\n');
	return (0);
}
