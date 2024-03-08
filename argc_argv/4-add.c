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
	int adds = 0;
	int i, j;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (adds >= 0)
			{
				j = atoi(argv[i]);
				if (j == 0 && *argv[i] != '0')
				{
					adds = -1;
				}

				adds += j;
			}
		}

		if (adds < 0)
		{
			printf("Error\n");
		}
		else
		{
			printf("%d\n", adds);
		}
	}

	return (0);
}
