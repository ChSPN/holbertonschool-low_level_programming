#include "main.h"
#include <stdlib.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * Description: function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int count = 0;
	unsigned int i;
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
		isOk = 0;
		for (i = 0; i < count; i++)
		{
			if (accept[i] == *s)
			{
				length++;
				s++;
				isOk = 1;
				continue;
			}
		}

		if (isOk == 0)
		{
			break;
		}
	}

	return (length);
}
