#include "main.h"

/**
 * _isalpha - check the character c lower to stdout
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (lower[i] == c || upper[i] == c)
		{
			return (1);
		}
	}

	return (0);
}
