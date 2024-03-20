#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * Description: print_strings
 * @separator: char
 * @n: n
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *v;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char*);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		printf("%s", v == NULL ? "(nil)" : v);
	}

	printf("\n");
	va_end(args);
}
