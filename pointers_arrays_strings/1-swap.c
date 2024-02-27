#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * Description: function that swaps the values of two integers
 * @a : int a = 98
 * @b: int b = 42
 * ...*: pointer
 */
void swap_int(int *a, int *b)
{
	int sa;
	int sb;
	int *ia = &sa;
	int *ib = &sb;

	sa = *a;
	sb = *b;
	*a = *ib;
	*b = *ia;
}
