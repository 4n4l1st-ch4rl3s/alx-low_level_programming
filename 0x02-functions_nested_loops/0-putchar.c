#include "main.h"

/**
 *  main - Entry point
 *  Description: prints provided argv
 *  Return: 0 (on sucess)
 */

int main(void)
{
	char msg[] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(msg[i]);
		i++;
	}
	return (0);
}
