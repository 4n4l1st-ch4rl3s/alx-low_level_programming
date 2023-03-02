#include "main.h"

/**
 * rot13 - rotates chars 13 times.
 * @c: param1
 * Return: s
 */

char *rot13(char *c)
{
	int i;
	char alph[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot13[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			c[i] = (c[i] - 65 > 25) ?
				rot13[c[i] - 97] : alph[c[i] - 65];
		}
	}
	return (c);
}
