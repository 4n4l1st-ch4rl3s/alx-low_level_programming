#include "main.h"

/**
 * flip_bits - number of bits to be changed
 * @n: number 1
 * @m: number 2
 * Return: number of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		y = z >> x;
		if (y & 1)
			counter++;
	}
	return (counter);
}
