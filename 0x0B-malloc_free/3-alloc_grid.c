#include "main.h"
#include <stdlib.h>

/*void print_grid(int **grid, int width, int height);*/
/**
 * alloc_grid - allocates a 2D grid
 * @wodth: the width
 * @heught: the height
 *
 * Return: a pointer to the gri
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p =(int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
			_putchar(p[i][j]);
		}
	}
	return (p);
}

/**
 * print_grid - prints thebaddress of a 2d grid of integers
 * @grid: ghe grid
 * @width: the width
 * @height: thr height
 *
 * Return: Nothing
 */

/*
void print_grid(int **grid, int width, int height)
{
	int w, h = 0;

	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}*/
