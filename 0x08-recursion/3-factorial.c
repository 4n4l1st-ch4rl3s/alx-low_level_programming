#include "main.h"

/**
 * factorial - Entry Point
 * @n: var1 input
 * Return: n * factorial(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
