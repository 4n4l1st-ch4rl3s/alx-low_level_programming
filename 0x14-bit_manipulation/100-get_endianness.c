#include "main.h"

/**
 * get_endianness - check for little endian or big endian
 * Return: 0 = big endian, 1 = small endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *)&x;

	return (*p);
}
