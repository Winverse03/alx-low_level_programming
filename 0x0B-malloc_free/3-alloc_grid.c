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

	int i, j;
	int **mygrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mygrid = malloc(height * width * sizeof(int));
	if (mygrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mygrid[i] = malloc(height * width * sizeof(int));
		if (mygrid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(mygrid[i]);
			}
		free(mygrid);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mygrid[i][j] = 0;
		}
		if (mygrid == NULL)
		{
			return (NULL);
			free(mygrid);
		}
	}
	return (mygrid);
}
