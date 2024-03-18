#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * Description: function
 * @name: name
 * @f: function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
