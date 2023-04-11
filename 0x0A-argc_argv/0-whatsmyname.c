#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Entry Point
 *  @argc: param 1
 *  @argv: param 2
 *  Return: 0
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
