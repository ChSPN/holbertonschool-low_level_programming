#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * Description: function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer of array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pointer = NULL;

	if (nmemb == 0 || size == 0)
		return (pointer);

	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (pointer);

	for (i = 0; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);
}
