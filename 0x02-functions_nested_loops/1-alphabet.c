#include "main.h"

/**
 *  print_alphabet - prints alphabets
 *  Return: 0
 *  main - Entry point
 */

void print_alphabet(void);

void print_alphabet(void)
{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	return (0);
}

/**
 * main - Entry point
 */

int main(void)
{
	print_alphabet();
}
