#include <stdio.h>
/**
 *  main - Entry point
 *  Return: 0
 */

int main(void)
{
	char msg[] = "abcdfgijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 24; i++)
	{
		putchar(msg[i]);
	}

	putchar('\n');
	return(0);
}
