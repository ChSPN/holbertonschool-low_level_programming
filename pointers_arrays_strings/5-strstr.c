#include "main.h"
#include <stdlib.h>
/**
 * _strstr - function that locates a substring
 * Description: function that locates a substring
 * @needle: chaine qu'il faut
 * @haystack: chaine complète à fouiller
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0;
	int i;
	int index = 0;
	char *p = NULL;

	while (*needle != '\0')
	{
		length++;
		needle++;
	}
	for (i = 0; i < length; i++)
	{
		needle--;
	}
	while (*haystack != '\0')
	{
		if (index == length)
			break;
		else if (*haystack == needle[index])
		{
			p = haystack;
			index++;
		}
		else
		{
			p = NULL;
			/* dans ce cas on reprend tout car il faut le mot complet*/
			index = 0;
		}
		haystack++;
	}
	if (p != NULL)
	{
		for (i = 1; i < length; i++)
			p--;
	}
	return (p);
}
