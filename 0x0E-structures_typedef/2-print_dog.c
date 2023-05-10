#include <stdio.h>
#include "dog.h"

/**
 *
 * print_dog - is a function that prints a strut
 * @dog: is used to it 
 * @d: is the name of the new user of that struct
 *
 * */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	printf("Name : %s \n", d->name);
	printf("Age : %f \n", d->age);
	printf("Owner : %s \n", d->owner);
}
