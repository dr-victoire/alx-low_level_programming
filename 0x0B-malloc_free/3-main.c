#include "main.h"
#include <stdio.h>

/**
 * main - checks code
 *
 * Return: 0 Always
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
		return (1);
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);

	return (0);
}
