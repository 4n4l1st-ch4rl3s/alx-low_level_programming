#include "main.h"

/**
 * print_most_numbers - print num from 0 to 9
 */

void print_most_numbers(void)
{
	char dig[] = "01356789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(dig[i]);
	}
	_putchar('\n');
}
