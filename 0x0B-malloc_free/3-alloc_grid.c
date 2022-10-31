#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid
 * @width: the width
 * @height: the height
 *
 * Return: a pointer to the gri
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; j++)
			{
				free(p[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
