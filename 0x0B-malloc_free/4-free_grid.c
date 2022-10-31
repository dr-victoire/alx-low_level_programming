#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: the grid to be freed
 * @height: the height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
