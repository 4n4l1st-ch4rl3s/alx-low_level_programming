#include "main.h"

/**
 * _strchr - Entry point
 * @s: variable 1
 * @c: variable 2
 * Return: string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}
	return (s + 1);
}
