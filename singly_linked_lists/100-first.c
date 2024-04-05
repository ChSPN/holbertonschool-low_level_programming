#include "lists.h"
#include <stdio.h>

/**
 * print_before_main - Prints a message before main function is executed.
 */
void print_before_main(void)
{
	char *msg1 = "You're beat! and yet, you must allow,\n";
	char *msg2 = "I bore my house upon my back!\n";

	while (*msg1)
	{
		putchar(*msg1);
		msg1++;
	}

	while (*msg2)
	{
		putchar(*msg2);
		msg2++;
	}
}
