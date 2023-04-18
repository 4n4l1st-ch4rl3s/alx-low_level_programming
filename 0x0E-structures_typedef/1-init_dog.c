#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry Point
 * @d: first variable
 * @name: variable name
 * @age: variable of age
 * @owner: variable of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
