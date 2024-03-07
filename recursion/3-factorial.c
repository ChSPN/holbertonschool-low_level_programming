#include "main.h"
#include <stdlib.h>

/**
 * factorial - function that returns the factorial of a given number
 * Description: product
 * @n: nombre
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
