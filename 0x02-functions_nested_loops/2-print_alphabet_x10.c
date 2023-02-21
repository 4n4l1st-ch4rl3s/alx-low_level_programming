#include "main.h"
/**
 *  print_alphabet_x10 - prints alphabets 10 times
 *  return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0, b='a';

	while (a < 10)
	{
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		a++;
	}
	_putchar('\n');
	return (0);
}
