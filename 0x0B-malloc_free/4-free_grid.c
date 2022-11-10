#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{

	int q;

	for (q = 0; q < height; q++)
		free(grid[q]);
	free(grid);
}
