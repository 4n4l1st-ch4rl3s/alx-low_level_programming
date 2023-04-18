#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry Point
 * @d: variable 1
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
