#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  - function that rees a 2 dimensional grid
 * @grid: pointer to grid
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height) 
{
	int i;

    for(int i = 0 ; i < height ; i++)
    {
        free(grid[i]);
    }
    free(grid);
}

