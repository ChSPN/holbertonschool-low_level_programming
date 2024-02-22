#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;
	char result[] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(result[i]);
		}

		_putchar('\n');
	}
}
