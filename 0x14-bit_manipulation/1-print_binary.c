#include "main.h"

/**
 * print_binary - converts a decimal to binary
 * @n: decimal to print in binary
 */

void print_binary(unsigned long int n)
{
	int x, counter;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
