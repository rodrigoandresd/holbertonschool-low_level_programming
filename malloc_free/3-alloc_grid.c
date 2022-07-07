#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that function that returns a pointer to a 2 d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0 ; h < height ; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (w = 0 ; w < height ; w++)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}

		for (w = 0 ; w < width ; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
