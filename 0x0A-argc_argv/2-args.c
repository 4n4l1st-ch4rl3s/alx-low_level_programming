#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: numbers of args
 * @argv: actual args
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
