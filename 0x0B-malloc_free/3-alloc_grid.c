#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid -  function thatcreates memory pointer of a double array
 * @width: is  variable used is the width
 * @height: is another variable to be used in array
 *
 **/

int **alloc_grid(int width, int height)
{

	int  **ptr;
	int i = 0;

	ptr = (int**)malloc(height * sizeof(int*));

	for(i = 0; i < height; i++)
		ptr[i] = (int*)malloc(width * sizeof(int));


	return (ptr);

}
