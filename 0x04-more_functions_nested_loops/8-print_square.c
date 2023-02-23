#include "main.h"

/**
 * print_square - print the square
 * @size: var
 */

void print_square(int size)
{
	int x = 0;

	while (x < size)
	{
		int a, b;

		for (; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');

		for (b =0; b < size; b++)
		{
			_putchar('#');
		}
		x++;

	}
}
