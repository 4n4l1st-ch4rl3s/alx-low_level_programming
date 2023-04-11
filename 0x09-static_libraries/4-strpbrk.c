#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: variable 1
 * @accept: variable 2
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *str = accept;

		while (*str != '\0')
		{
			if (*s == *str)
				return (s);

			str++;
		}
		s++;
	}
	return (0);
}
