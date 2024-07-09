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
	int index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(sizeof(int) * height);

		if (grid[index] == NULL)
			return (NULL);
	}
	return (grid);
	free(grid);
}



