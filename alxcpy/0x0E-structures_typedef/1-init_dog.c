#include <stdio.h>
#include "dog.h"

/**
 *  *
 *   *  init_dog - function that initializes a variable of type stryct dog
 *    *
 *     *  @struct dog *d: variable of the struct
 *      *  @name: variable of the struct.
 *       *  @owner: variable that saves owners name
 *        *
 *         **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	        if (d == NULL)
			                return;

		        d->name = name;
			        d->age = age;
				        d->owner = owner;

}
