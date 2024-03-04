#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Search character in pointer.
 * Description: Search character in pointer.
 * @s: pointer
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}

		s++;
	}

	return (p);
}
