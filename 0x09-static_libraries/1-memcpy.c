#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *string;

	string = dest;
	while (n != 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (string);
}
