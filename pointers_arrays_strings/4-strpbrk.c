#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that gets the length of a prefix substring
 * Description: function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;
	int count = 0;
	int i;
	int isOk = 0;

	while (*accept != '\0')
	{
		count++;
		accept++;
	}

	for (i = 0; i < count; i++)
	{
		accept--;
	}

	while (*s != '\0')
	{
		for (i = 0; i < count; i++)
		{
			if (accept[i] == *s)
			{
				isOk = 1;
				p = s;
				continue;
			}
		}

		if (isOk == 1)
		{
			break;
		}

		s++;
	}

	return (p);
}
