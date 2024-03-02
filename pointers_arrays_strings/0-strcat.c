#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * Description: function that concatenates two strings
 * @dest: char pointer dest
 * @src: char pointer src
 * Return: char pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (*dest != '\0')
	{
		dest++;
		length++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		length++;
	}

	*dest = *src;

	for (i = 0; i < length; i++)
	{
		dest--;
	}

	return (dest);
}
