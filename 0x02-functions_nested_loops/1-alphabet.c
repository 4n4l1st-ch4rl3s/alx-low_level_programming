#include "main.h"

/**
 *  print_alphabet - prints alphabets
 *  Return: 0
 */

void print_alphabet(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
