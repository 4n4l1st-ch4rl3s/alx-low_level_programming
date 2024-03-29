#include "main.h"

/**
 * _pow_recursion - Entry Point
 * @x: var 1
 * @y: var 2
 *Return: x * _pow_recursion(x, y - 1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
