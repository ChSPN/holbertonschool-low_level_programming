#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * Description: function that concatenates two strings
 * @dest: char pointer dest
 * @src: char pointer src
 * @n: definition
 * Return: char pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
		length++;
	}

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		length++;
		count++;
	}

	*dest = '\0';

	for (i = 0; i < length; i++)
	{
		dest--;
	}

	return (dest);
}
