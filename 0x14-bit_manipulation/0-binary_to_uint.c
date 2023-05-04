#include "main.h"

/**
 * binary_to_uint - Entry Point. Converts binary to unsigned int.
 * @b: parameter to e converted to unsigned int.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec = 2 * dec + (b[x] - '0');
	}
	return (dec);
}
