#include "main.h"

/**
 * _strcmp - copy from one to another
 * @s1: param 1
 * @s2: param 2
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if ((s1[i] - s2[i]) != 0)
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
