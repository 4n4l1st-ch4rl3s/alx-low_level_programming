#include "main.h"

/**
 * string_toupper - converts dtrings to upper
 * @c: param1
 * Return: nothing
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
