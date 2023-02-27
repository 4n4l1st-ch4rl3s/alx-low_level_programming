#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer
 * Return: i
 */

int _strlen(char *s)
{
	/* char *s; */
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
