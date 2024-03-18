#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * Description: function
 * @array: array
 * @size: size
 * @action: action
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
