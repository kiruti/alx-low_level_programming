#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
*
* new_dog - function that create a new dog
* @name : variable of name
* @age : variable that represent age
* @owner : i may think it is slavery but not
*
**/


dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *newd;

	newd = malloc(sizeof(struct dog));

	if (newd == NULL)
		return NULL;

		if (name == NULL)
			free(newd);}
