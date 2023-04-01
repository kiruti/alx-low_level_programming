#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 * free_grid: this fuction free space memroy used in a double 
 *
 * @grid - first variable 
 * @height - is the second vsriable 
 *
 **/


void free_grid(int **grid, int height)
{ 
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); 
	}

		free(grid);


}
