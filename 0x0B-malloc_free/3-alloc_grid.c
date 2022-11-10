#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, the function fails - NULL.
 * Otherwise return: a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{

	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * width * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(height * width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (--i; i >= 0; i--;)
				free(grid[i]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
