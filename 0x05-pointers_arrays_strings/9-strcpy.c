#include "main.h"

/**
 *  _strcpy - copies string
 *  @src: from
 *  @dest: to
 *  Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
