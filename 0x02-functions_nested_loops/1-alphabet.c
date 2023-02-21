#include "main.h"

/**
 *  main - Entry point
 *  Return: 0
 */

char print_alphabet(void);

char print_alphabet()
{
	for (x = 'a'; x<= 'z'; x++)
	{
		_putchar(x);
	}

}

int main(void)
{
	print_alphabet();
}
