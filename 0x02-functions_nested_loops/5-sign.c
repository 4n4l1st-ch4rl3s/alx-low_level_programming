#include "main.h"
/**
 * print_sign - print sign depending on the argv
 * @n: input
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return(0);
		_putchar('0');
	}
}
