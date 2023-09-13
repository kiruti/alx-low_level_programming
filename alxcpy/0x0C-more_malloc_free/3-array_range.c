#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - is a function creating an array of integers.
 * @min: the leaste varible used to create the origin of the array
 * @max: the max number of arrya needed to be formed
 * Return: return a pinter
 *
 **/

int *array_range(int min, int max)
{


	int *ptr;
	int count = 0;
	int memalloc = (max - min + 1) * sizeof(int);

	ptr = malloc(memalloc);

	if (min > max)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		{

		ptr[count] = 0;
		count++;
		min++;

		}

	return (ptr);

}
