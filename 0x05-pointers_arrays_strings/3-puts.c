#include "main.h"

/**
 * _puts - prints the chars
 * @str: pointer
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
