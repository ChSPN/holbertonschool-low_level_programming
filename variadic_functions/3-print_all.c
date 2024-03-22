#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - function
 * Description: print_c
 * @args: args
*/
void print_c(va_list args)
{
	int v = va_arg(args, int);

	printf("%c", v);
}

/**
 * print_i - function
 * Description: print_i
 * @args: args
*/
void print_i(va_list args)
{
	int v = va_arg(args, int);

	printf("%d", v);
}

/**
 * print_f - function
 * Description: print_f
 * @args: args
*/
void print_f(va_list args)
{
	double v = va_arg(args, double);

	printf("%f", v);
}

/**
 * print_s - function
 * Description: print_s
 * @args: args
*/
void print_s(va_list args)
{
	char *v = va_arg(args, char*);

	printf("%s", v == NULL ? "(nil)" : v);
}

/**
 * print_all - function
 * Description: print_all
 * @format: format
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;
	ft formats[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4 && *formats[j].format != format[i])
		{
			j++;
		}

		if (j < 4)
		{
			if (i > 0)
			{
				printf(", ");
			}

			formats[j].print(args);
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
