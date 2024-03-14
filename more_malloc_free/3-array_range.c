#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * Description: Write a function that creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int i;
	int index = 0;
	int *pointer = NULL;

	if (min > max)
		return (pointer);

	pointer = malloc((max - min + 1) * sizeof(int));
	if (pointer == NULL)
		return (pointer);

	for (i = min; i <= max; i++)
	{
		pointer[index] = i;
		index++;
	}

	return (pointer);
}
