#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  Entry point
 * @array: Pointer 1
 * @size: size or array
 * @action: funcion pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
