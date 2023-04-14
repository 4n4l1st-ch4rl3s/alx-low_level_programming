#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 * @s1: var 1 input
 * @s2: var 2 dest
 * @n: length
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = n, x;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; x++)
		s1_len++;

	result = malloc(sizeof(char) * (s1_len + 1));

	if (result == NULL)
		return (NULL);
	s1_len = 0;

	for (x = 0; s1[x]; x++)
		result[s1_len++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		result[s1_len++] = s2[x];

	result[s1_len] = '\0';
	return (result);
}
