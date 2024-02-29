#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string
 * Description: function that copies the string pointed to by src.
 * @dest: Destination
 * @src: Source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	do {
		*dest = *src;
		src++;
		dest++;
		length++;
	} while (*src != '\0');

	*dest = *src;
	for (i = 0; i < length; i++)
	{
		dest--;
	}

	return (dest);
}
