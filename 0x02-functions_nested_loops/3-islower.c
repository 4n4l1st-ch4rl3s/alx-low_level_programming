#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: variable
 * Return: 1 on success or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
