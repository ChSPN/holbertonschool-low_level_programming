#include "main.h"

/**
 * sqrt2 - function that returns the natural square root of a number.
 * Description: function that returns the natural square root of a number.
 * @a : int
 * @b : int
 * Return: sqrt2(a, b + 1)
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(a, b + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * Description: function that returns the natural square root of a number.
 * @n : int
 * Return: sqrt2(n, 1)
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
