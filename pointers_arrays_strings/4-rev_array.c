#include "main.h"

/**
 * reverse_array - function reverse array
 * Description: function reverse array
 * @a: int pointer
 * @n: size of int array
 */
void reverse_array(int *a, int n)
{
	int i, s, d;
	int size = n / 2;

	for (i = 0; i < size; i++)
	{
		s = a[i];
		d = a[n - 1 - i];
		a[i] = d;
		a[n - 1 - i] = s;
	}
}
