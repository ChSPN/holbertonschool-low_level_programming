#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a reverse string.
 * Description: function that prints a reverse string.
 * @s: chaine de caracteres "My School".
 * Return: blabla
 */
void rev_string(char *s)
{
	char *end = s, temp;

	while (*end)
	{
		end++;
	}

	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
