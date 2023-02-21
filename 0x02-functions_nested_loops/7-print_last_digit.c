#include "main.h"
/**
 *  print_last_digit - Entry Point prints last digit
 *  @x: input
 *  Return: result
 */

int print_last_digit(int x)
{
	if (x > 0)
	{
		x = x % 10;
		_putchar(x + '0');
	}
	else
	{
		x = x %  10 - 1;
		_putchar(x + '0');
	}
	return (x);
}
