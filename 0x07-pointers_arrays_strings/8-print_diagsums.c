#include "main.h"
#include <stdio.h> 

/**
 *
 *
 * print_diagsums : a function that prints the sum of the two diagonals
 * @a - is the pointer to teh array
 * @size - is the size of the array
 *
 **/

void print_diagsums(int *a, int size)

{
			int principal = 0;
			int i, j;

		for (i = 0; i < *a; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i == j)
				principal += *a;
			}
			plrintf("%d \n", principal);
		}

}
