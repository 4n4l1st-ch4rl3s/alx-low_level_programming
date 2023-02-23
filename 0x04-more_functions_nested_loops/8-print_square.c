#include "main.h"

/**
 * print_square - print the square
 * @size: var
 */

void print_square(int size)
{
	int x = 1, a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x <= size)
		{
			for (; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			x++;
		}
	}
}
