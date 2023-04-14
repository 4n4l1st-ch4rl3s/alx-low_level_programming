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
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);
	return (new_ptr);
}
