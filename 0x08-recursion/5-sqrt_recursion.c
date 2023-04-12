#include "main.h"

/**
 * _sqrt_recursion - Entry Point
 * @n: variable 1
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper -  Entry point
 * @n: var 1
 * @guess: var 2
 * Return: number
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt_helper(n, guess + 1));
}
