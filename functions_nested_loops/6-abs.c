#include "main.h"

/**
 * _abs - short description nombre absolu
 * @n: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
