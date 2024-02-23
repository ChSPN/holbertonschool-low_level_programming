#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar('0' + n);
		return (n);
	}
}
