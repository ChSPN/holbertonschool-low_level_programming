#include "main.h"
#include <stdio.h>

/**
 * print_array - function thats prints n elements of an array of integers,
 * followed by a new line.
 * @a: the input array.
 * @n: the lenght of the array.
 * Return: blabla
 */
void print_array(int *a, int n)

{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index > 0)
		{
			printf(", ");
		}

		printf("%d", *a);
		a++;
	}

	putchar('\n');
}
