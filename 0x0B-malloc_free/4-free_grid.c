#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up memory allocation
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
	{
		free(grid);
	}

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
