#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - function
 * Description: print_c
 * @args: args
 * Return: char
*/
char print_c(va_list args)
{
	int v = va_arg(args, int);

	return (v);
}

/**
 * print_i - function
 * Description: print_i
 * @args: args
 * Return: int
*/
int print_i(va_list args)
{
	int v = va_arg(args, int);

	return (v);
}

/**
 * print_f - function
 * Description: print_f
 * @args: args
 * Return: float
*/
double print_f(va_list args)
{
	double v = va_arg(args, double);

	return (v);
}

/**
 * print_s - function
 * Description: print_s
 * @args: args
 * Return: char
*/
char *print_s(va_list args)
{
	char *v = va_arg(args, char*);

	return (v == NULL ? "(nil)" : v);
}

/**
 * print_all - function
 * Description: print_all
 * @format: format
*/
void print_all(const char * const format, ...)
{
	int j = 0;
	char *space;
	va_list ap;

	va_start(ap, format);

	while (format && format[j])
	{
		space = "";
		if (format[j + 1])
			space = ", ";

		switch (format[j])
		{
			case 'c':
				printf("%c%s", print_c(ap), space);
				break;
			case 'i':
				printf("%d%s", print_i(ap), space);
				break;
			case 'f':
				printf("%f%s", print_f(ap), space);
				break;
			case 's':
				printf("%s%s", print_s(ap), space);
				break;
		}

		j++;
	}

	printf("\n");
}
