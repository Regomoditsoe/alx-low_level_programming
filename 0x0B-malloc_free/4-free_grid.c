#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2d grid
 * @height: int
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
