#include "main.h"

/**
 * get_bit - Entry point
 * @n: parameter 1 containing number to search
 * @index: param 2
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
