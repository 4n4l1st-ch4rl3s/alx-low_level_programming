#include <stdio.h>
/**
 *  main- Entry point
 *  Return: 0
 */

int main(void)
{
	char msg[] = "zyxwvutsrqponmlkjihgfedcba";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(msg[x]);
	}

	putchar('\n');
	return (0);
}
