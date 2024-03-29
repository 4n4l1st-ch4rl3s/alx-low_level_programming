#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * @a: pointer
 * @size: variable
 * Return: sum of sum1 and sum2
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int m;

	for (m = 0; m <  size; m++)
	{
		sum1 += *(a + m * size + m);
		sum2 += *(a + m * size + size - 1 - m);
	}
	printf("%d, %d\n", sum1, sum2);
}
