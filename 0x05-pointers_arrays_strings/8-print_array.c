#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of n integers
 * @a: array name argument
 * @n: array number argument
 *
 * Return: 0 (Successful)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i == (n-1))
		{
			printf("%d", a[i]);
		}
	}

	_putchar('\n');
}
