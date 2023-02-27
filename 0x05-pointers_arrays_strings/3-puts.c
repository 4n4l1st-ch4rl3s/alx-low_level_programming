#include "main.h"

/**
 * _puts - prints the chars
 * @str: pointer
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
