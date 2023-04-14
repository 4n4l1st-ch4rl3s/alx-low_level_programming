#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry Point
 * @min: var 1
 * @max: var 2
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, x;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr  == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arr[x] = min + x;
	return (arr);
}
