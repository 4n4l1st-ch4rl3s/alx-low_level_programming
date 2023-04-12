#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: var 1
 * @height: var 2
 *
 * Return: grid (success)
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0 || width + height < 2)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
