#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 */

void rev_string(char *s)
{
	int begin = 0, count = 0;
	char end;

	while (s[count++])
		begin++;
	for (count = begin - 1; count >= begin / 2; count--)
	{
		end = s[count];
		s[count] = s[begin - count - 1];
		s[begin - count - 1] = end;
	}
}
