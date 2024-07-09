#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - that returns a pointer to a 2 dimensional array of integers
 *@width: the width of the 2 dimensional array
 *@height: the height of the 2 dimensional array
 *Return: grid or NULL if the functions fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index_h;
	int index_w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (index_h = 0; index_h < height; index_h++)
	{
		grid[index_h] = malloc(sizeof(int) * width);

		if (grid[index_h] == NULL)
			return (NULL);

	for (index_w = 0; index_w < width; index_w++)
		grid[index_h][index_w] = 0;
	}

	return (grid);
	free(grid);
}



