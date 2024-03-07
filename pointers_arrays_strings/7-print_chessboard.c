#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - imprimer un jeu d echecs avec la position des pions
 * Description: imprimer un jeu d echecs avec la position des pions
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		if (i > 0)
		{
			_putchar('\n');
		}

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}

	_putchar('\n');
}
