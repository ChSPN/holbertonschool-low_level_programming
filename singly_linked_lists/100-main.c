#include "lists.h"
#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0
 */
int main(void)
{
	char *msg1;
	char *msg2;

	msg1 = "(A tortoise, having pretty good sense of a hare's nature";
	msg2 = ", challenges one to a race.)\n";

	print_before_main();

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

	return (0);
}
