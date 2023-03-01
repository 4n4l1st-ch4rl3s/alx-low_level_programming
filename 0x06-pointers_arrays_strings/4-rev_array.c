#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: param1
 * @n: param 2
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = n - 1; x >= n / 2 ; x--)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
	}
}
