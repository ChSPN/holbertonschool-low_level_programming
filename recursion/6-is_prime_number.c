#include "main.h"

/**
 * _is_prime_number - returns 1 if the input integer is a prime number
 * Description: function that returns 1 if the input integer is a prime number
 * @n: nombre entier
 * @i: nombre à diviser
 * Return: return 1 or 0
 */
int _is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_number(n, i + 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * Description: function that returns 1 if the input integer is a prime number
 * @n: nombre entier
 * Return: return 1 or 0
 */
int is_prime_number(int n)
{
	return (_is_prime_number(n, 2));
}
