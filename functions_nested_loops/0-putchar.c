#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char result[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(result[i]);
	}

	_putchar('\n');
	return (0);
}
