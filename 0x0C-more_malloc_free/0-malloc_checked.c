#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry Point
 * @b: variable 1
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p; 
	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
