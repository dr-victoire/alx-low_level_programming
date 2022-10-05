#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: the size of the triangle to be printed
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < i)
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
