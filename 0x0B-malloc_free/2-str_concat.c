#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 * @s1: variable 1
 * @s2: variable 2
 *
 * Return: concat (success)
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	concat = (char *) malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);
	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2 + 1);
	return (concat);
}
