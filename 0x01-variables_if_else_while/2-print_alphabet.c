#include <stdio.h>

/**
 *  main - Entry point
 *  Return: 0
 */

int main(void)
{
	char msg[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(msg[i]);
	}

	putchar('\]n');
	return (0);
}
