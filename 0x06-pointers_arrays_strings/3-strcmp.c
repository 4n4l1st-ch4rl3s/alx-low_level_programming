#include "main.h"

/**
 * _strcmp - copy from one to another
 * @s1: param 1
 * @s2: param 2
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
