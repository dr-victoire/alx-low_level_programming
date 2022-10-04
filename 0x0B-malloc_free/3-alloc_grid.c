#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - gives a 2D array of integers
 * @width: array's rows
 * @height: arrray's collumns
 *
 * Return: Pointer to the array of integers
 * On Failure, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	*grid = malloc(sizeof(**grid));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid = grid[i][j];
		}
	}

	return (*grid);
}
