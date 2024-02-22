#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char result[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(result[i]);
	}

	_putchar('\n');
}
