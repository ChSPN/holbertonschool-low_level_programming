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
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
