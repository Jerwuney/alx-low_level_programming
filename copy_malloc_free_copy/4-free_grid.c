#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid
 * @grid: the 2D grid
 * @height: the length along the vertical
 *
 * Return: Nothing upon succes
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
