#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0
 */

int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (int y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
