#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function used to print a chessboard
 * @a - variable used one
 * @8 - is the secon arra
 *
 **/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

}
