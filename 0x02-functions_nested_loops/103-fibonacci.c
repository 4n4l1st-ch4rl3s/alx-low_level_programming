#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, y;
	float x;

	while (1)
	{
		y = fib1 + fib2;
		if (y > 4000000)
			break;

		if ((y % 2) == 0)
			tot_sum += y;

		fib1 = fib2;
		fib2 = y;
	}
	printf("%.0f\n", x);

	return (0);
}

