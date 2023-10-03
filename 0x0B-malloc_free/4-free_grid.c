#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function thatfrees 2 dimentional grid created before
 * @grid: the parameter 1
 * @height: the parameter 2
 * Return: reture 0
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
