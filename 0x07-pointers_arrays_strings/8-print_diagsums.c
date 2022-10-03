#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: array name
 * @size: the size of the array
 *
 * Return: Nothing
 */

void print_diagsums(int a[], int size)
{
	int i, j;
	int left_sum = 0;
	int right_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				left_sum += a[i][j];
			}

			if ((i + j) == (size - 1))
			{
				right_sum += a[i][j];
			}
		}
	}

	printf("%d, %d\n", left_sum, right_sum);
}
