#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: numbers of args
 * @argv: actual args
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int first_num, sec_num, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first_num = atoi(argv[1]);
	sec_num = atoi(argv[2]);
	result = first_num * sec_num;

	printf("%d\n", result);
	return (0);
}

