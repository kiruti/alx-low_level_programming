#include "main.h"
#include <stdlib.h>
#include <stdio.h>



void *malloc_checked(unsigned int b)
{

	int* marry;

	marry = (int*) malloc(sizeof(int) * b);

	return (marry);

}
