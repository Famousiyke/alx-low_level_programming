#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 * created by your alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
