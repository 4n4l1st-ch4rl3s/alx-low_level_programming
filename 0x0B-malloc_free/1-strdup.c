#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * @str: variable
 *
 * Return: dup (success)
 */

char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;

	dup = (char *) malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	memcpy(dup, str, len);
	return (dup);
}
