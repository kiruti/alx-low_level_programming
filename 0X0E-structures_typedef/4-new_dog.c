#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *
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
	{
		free(newd);
		return (NULL);
		
	}
	
		newd->name = malloc(sizeof(char) * strlen(name)+1);
		
		if (newd->name == NULL)
			return (NULL);
		strcpy(newd->name, name);

		newd->age = age;

		if(owner == NULL)
		{
			free(newd->owner);
			free(newd);
			return (NULL);
		}

	newd->owner = malloc(sizeof(char) * strlen(owner) + 1);
		if (newd->owner == NULL)
			return NULL;

		strcpy(newd->owner , owner); 
	

		return (newd);
}
