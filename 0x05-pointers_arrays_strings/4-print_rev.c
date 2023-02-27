#include "main.h"

/**
 * print_rev - prints chars in reverse
 * @s: pointer
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0, n = 0;
	while (s[n++])
	{
		i++;
	}
	for  (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
