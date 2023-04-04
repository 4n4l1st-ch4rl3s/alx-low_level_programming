#include "main.h"

/**
 * _strspn - Entry point
 * @s: variable 1
 * @accept: variable 2
 * Return: str2
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str1, str2;

	for (str1 = 0; s[str1] != '\0'; str1++)
	{
		for (str2 = 0; accept[str2] != '\0'; str2++)
		{
			if (s[str1] == accept[str2])
			{
				break;
			}
		}
		if (accept[str2] == '\0')
		{
			return (str1);
		}
	}
	return (str1);
}
