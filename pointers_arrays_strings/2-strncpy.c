#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that concatenates two strings
 * Description: function that concatenates two strings
 * @dest: char pointer dest
 * @src: char pointer src
 * @n: definition
 * Return: char pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}

	for (i = count; i < n; i++)
	{
		*dest = '\0';
		dest++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest--;
		src--;
	}

	return (dest);
}
