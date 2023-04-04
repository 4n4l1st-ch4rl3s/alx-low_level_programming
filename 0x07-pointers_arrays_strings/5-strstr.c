#include "main.h"

/**
 * _strstr - Entry Point
 * @haystack: variable 1
 * @needle: variable 2
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char ptr = *needle;

		if (*haystack == ptr)
			return (haystack);
		else if (*(haystack + 1) == ptr)
			return (haystack + 1);

		haystack++;
	}
	return (haystack + 1);
}
