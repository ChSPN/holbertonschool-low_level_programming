#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'q'; letter <= 'z'; letter++)
	{
	for (letter = 'e'; letter <= 'z'; letter++)
			putchar (letter);
	}

	putchar('\n');

	return (0);
}
