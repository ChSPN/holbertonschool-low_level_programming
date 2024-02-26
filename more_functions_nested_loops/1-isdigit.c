#include "main.h"

/**
 * _isdigit - check the character digit to stdout
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{

	char digit[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)

	{
		if (digit[i] == c)
		{
			return (1);
		}
	}

	return (0);
}























