#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D array
* @grid: the 2D array
* @height: the heigth (collumn)
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	grid = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
