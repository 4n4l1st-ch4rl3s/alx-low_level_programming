#include "main.h"

/**
 * *_memset - Entry point
 * @s: var 1
 * @b: var 2
 * @n: int unsigned var
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;
	while (n != 0)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}
