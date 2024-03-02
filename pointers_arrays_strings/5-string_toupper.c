#include "main.h"

/**
 * string_toupper - upper a string
 * Description: upper a string
 * @s: string to upper
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int upper, i;
	int length = 0;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			upper = *s - 32;
			*s = upper;
		}

		s++;
		length++;
	}

	for (i = 0 ; i < length; i++)
	{
		s--;
	}

	return (s);
}
