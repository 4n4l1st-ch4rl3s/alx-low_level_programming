#include "main.h"

/**
 * set_bit - Entry point
 * @n: param 1
 * @index: param 2
 * Return: 1 sucess, -1 failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
