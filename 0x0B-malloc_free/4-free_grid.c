#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees alloc_grid array.
 * @grid: Pointer to the array.
 * @height: Height of array.
 *
 * Return: void.
 *
 * Description: Frees the memory allocated for a two-dimensional grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
