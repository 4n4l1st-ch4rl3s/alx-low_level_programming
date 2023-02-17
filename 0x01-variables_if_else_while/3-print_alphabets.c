#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0
 */

int main(void)
{
	char msg[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

	for (int i = 0; i < 56; i++)
	{
		putchar(msg[i]);
		putchar('\n')
	}

	return (0);
}
