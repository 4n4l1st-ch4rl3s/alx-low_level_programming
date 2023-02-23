#include "main.h"

/**
 * mul - multiples teo numbers
 * @a: var 1
 * @b: var 2
 * Return: 0
 */

int mul(int a, int b)
{
	int result;

	result = a * b;
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result / 10)
		print(result / 10);

	_putchar(result % 10 + '0');
}
