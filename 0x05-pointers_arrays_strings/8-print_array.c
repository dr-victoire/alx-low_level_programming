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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
