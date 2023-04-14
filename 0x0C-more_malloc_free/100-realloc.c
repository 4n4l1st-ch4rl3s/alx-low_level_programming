#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Entry point
 * @ptr: first var pointer
 * @old_size: sec var
 * @new_size: third var
 * Return: new_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int x, max = new_size;
	char *oldsz = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	c = malloc(new_size);
	if (c == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		c[x] = oldsz[x];
	free(ptr);
	return (c);
}
