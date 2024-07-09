#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - free allocated memory for grid
 *@grid: 2 dimensional grid
 *@height: height of the grid
 */


void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL || height <= 0)

	free(grid[index]);

	free(grid);
}
