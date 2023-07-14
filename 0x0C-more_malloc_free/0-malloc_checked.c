#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function copies int to a new memroy block using malloc
 *
 * @b: this is a variable that is used to carry the smae int
 *
 * Return: the pointer of new space
 *
 **/


void *malloc_checked(unsigned int b)
{

	int  *marry;

	marry = (int *) malloc(sizeof(int) * b);

	return (marry);

}
