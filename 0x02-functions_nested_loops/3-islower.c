#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: contain the characters to check
 *
 * Return: 1 on success or 0 otherwise
 */
int _islower(int c)
{
	int i = 0;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
