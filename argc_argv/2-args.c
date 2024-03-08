#include <stdio.h>

/**
 * main - function that swaps the values of two integers
 * Description: function that swaps the values of two integers
 * @argc: c
 * @argv: v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
