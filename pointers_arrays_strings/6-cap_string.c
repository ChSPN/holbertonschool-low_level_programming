#include "main.h"

/**
 * cap_string - capitalize a string
 * Description: capitalize a string
 * @s: string to upper
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int upper, i;
	int length = 0;
	char previous;

	while (*s != '\0')
	{
		if (length == 0 
			|| previous == ' '
			|| previous == '\t'
			|| previous == '\n'
			|| previous == ','
			|| previous == ';'
			|| previous == '.'
			|| previous == '!'
			|| previous == '?'
			|| previous == '"'
			|| previous == '('
			|| previous == ')'
			|| previous == '{'
			|| previous == '}')
		{
			if (*s >= 'a' && *s <= 'z')
			{
				upper = *s - 32;
				*s = upper;
			}
		}

		previous = *s;
		s++;
		length++;
	}

	for (i = 0 ; i < length; i++)
	{
		s--;
	}

	return (s);
}
