#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry Point
 * @grid: var 1
 * @height: var 2
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
