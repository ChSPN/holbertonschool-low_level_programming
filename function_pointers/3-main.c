 #include <stdlib.h>
 #include <stdio.h>
 #include "3-calc.h"

/**
 * main - check the code
 * @argc: c
 * @argv: v
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int a, b;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (*argv[2] == '/' && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
