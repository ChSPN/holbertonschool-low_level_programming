#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char result[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 25 ; i++)
	{
		_putchar (result[i]);
	}
	_putchar ('\n');
	return (0);
}
