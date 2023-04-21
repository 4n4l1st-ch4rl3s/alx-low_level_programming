#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 * @a: address pointer to main function
 * @n: number of bytes to print
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%.2hhx", a[b]);
		if (b < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: number of args
 * @argv: actual args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
