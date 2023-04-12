#include "main.h"

/**
 * is_prime_number - Entry Point
 * @n: variable input
 *
 * Return: prime(n, n-1)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - Entry point
 * @n: var 1
 * @x: var 2
 *
 * Return: prime (n, x-1)
 */

int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (_prime(n, x - 1));
}

