#include "main.h"

/**
 * _islower - check the character c lower to stdout
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == c)
		{
			return (1);
		}
	}

	return (0);
}
