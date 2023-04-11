#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 (success)
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[x]);

		if (num > 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
