#include "main.h"

/**
 * print_numbers - print num from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char dig[] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(dig[i]);
	}
	_putchar('\n');
	return (0);
}
