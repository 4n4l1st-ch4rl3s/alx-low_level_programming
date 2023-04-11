#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer 1
 * @src: pointer 2
 * @n: number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i++])
		x++;
	for (i = 0; src[i] && i < n; i++)
		dest[x++] = src[i];
	return (dest);
}
