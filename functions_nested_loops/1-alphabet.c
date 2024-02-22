#include "main.h"

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
