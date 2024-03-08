#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * Description: program that multiplies two numbers
 * @argc: c
 * @argv: v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	int i, j;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}

	return (0);
}
