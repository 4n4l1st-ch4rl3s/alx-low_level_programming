#include "main.h"
/**
 * _isalpha - check for  alpha
 * @c: input variable
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}