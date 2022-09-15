#include "main.h"

/**
 * print_square - prints a square
 *
 * Return: 0 (Successful)
 */

void print_square(int size)
{
	while (size-- > 0)
	{
		while (size-- > 0)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
