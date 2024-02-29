#include <stdio.h>
#include "main.h"

/**
 * _atoi - translate string to int
 * Description: translate string to int
 * @s: input char
 * Return: int
 */
int _atoi(char *s)
{
	int length = 0;
	int i;
	int m = 1;
	int v = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			length++;
			s++;
		}
		else if (length == 0)
		{
			s++;
		}
		else
		{
			break;
		}
	}

	s--;
	for (i = 0; i < length; i++)
	{
		v += m * (*s - 48);
		m *= 10;
		s--;
	}

	if (*s == '-')
	{
		m = -1;
	}
	else
	{
		m = 1;
	}

	return (v * m);
}
