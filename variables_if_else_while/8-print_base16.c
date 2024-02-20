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
	char hexa[] = "0123456789abcdef";
	int num;

	for (num = 0; num <= 15; num++)
	{
		putchar(hexa[num]);
	}

	putchar('\n');
	return (0);
}
