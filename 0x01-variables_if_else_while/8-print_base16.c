#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(i % 10 + '0');
	}

	putchar('\n');
	return (0);
}
