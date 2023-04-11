#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments entered
 * @argv: the actual arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
