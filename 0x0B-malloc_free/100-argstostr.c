#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Entry Point
 * @ac: args 1
 * @av: args 2
 *
 * Return: result (success)
 */

char *argstostr(int ac, char **av)
{
	int length, position, i, string_length;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;
	result = (char *) malloc(length * sizeof(char));

	if (result == NULL)
		return (NULL);
	position = 0;

	for (i = 0; i < ac; i++)
	{
		string_length = strlen(av[i]);

		strcpy(result + position, av[i]);
		position += string_length;
		result[position] = '\n';
		position++;
	}
	result[length - 1] = '\0';
	return (result);
}
