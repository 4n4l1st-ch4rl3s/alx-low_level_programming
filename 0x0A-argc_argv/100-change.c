#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments used
 * @argv: actual arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents, x = 0, y, z;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (y = 0; y < 5; y++)
		{
			z = cents / a[y];
			cents -= z * a[y];
			x += z;
			if (cents == 0)
				break;
		}
	}
	printf("%d\n", x);
	return (0);
}
