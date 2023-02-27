#include "main.h"

/**
 * puts2 - displays characters at even position
 * @str: pointer
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
