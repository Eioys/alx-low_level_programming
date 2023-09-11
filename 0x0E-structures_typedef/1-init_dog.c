#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intiaalize a dog
 * @d: pointer to the dog
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
