#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 * Description: print_numbers
 * @separator: separator
 * @n: number
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int v;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
		if (i > 0)
		{
			printf("%s", separator);
		}

		printf("%d", v);
	}

	printf("\n");
	va_end(args);
}
