#include "main.h"

/**
 * _strstr - Entry Point
 * @haystack: variable 1
 * @needle: variable 2
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *q = haystack;

	while (*q != '\0')
	{
		char *q1 = q;
		char *ptr = needle;

		while (*ptr != '\0' && *q1 == *ptr)
		{
			q1++;
			ptr++;
		}
		if (*ptr == '\0')
			return (q);
		q++;
	}
	return (0);
}
