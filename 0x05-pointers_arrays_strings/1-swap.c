#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first pointer
 * @b: second pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
