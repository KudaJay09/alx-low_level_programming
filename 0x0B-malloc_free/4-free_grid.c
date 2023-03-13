#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2D array
 * @grid: 2d Grid
 * @height: height dimension
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
