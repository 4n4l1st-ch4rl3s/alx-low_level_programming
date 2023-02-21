#include "main.h"
/**
 *  print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		a++;
		_putchar('\n');
	}
}
