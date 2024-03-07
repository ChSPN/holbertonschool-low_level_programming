#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to the power of y
 * Description: function that returns the value of x to the power of y
 * @y: x
 * @x: y
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}

