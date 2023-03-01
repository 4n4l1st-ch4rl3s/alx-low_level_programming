#include "main.h"

/**
 * _strncpy - copies exacctly what s provided
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (src[i++])
		x++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = x; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
