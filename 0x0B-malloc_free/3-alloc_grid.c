#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid
 * @wodth: the width
 * @heught: the height
 *
 * Return: a pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int) * (width * height));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
			_putchar(p[i][j]);
		}
	}
	return (*p);
}
