#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * ft - struct
 * Description: ft
 * @format: The format
 * @print: The function print
 */
typedef struct ft
{
	char *format;
	void (*print)(va_list args);
} ft;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
