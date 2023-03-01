#include "main.h"

/**
 *  _strcat - copies string
 *  @src: from
 *  @dest: to
 *  Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i++])
		x++;
	for (i = 0; src[i]; i++)
		dest[x++] = src[i];
	return (dest);
}
