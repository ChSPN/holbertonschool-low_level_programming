#include "main.h"

/**
 * Print numbers - print the numbers from 0 to 9 to stdout
 * @c: character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	
	_putchar('\n');
}























