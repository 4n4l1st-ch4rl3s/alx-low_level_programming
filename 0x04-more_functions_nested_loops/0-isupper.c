#include "main.h"

/**
 *  _isupper - Entry point
 *  @c: value to be determined if lower or upper
 *  Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
