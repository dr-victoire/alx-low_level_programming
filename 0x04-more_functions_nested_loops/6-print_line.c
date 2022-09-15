#include "main.h"

/**
 * print_line - prints the _ character
 * @n: the only argument this function returns
 *
 * Return: 0 (Successful)
 */

void print_line(int n)
{
	int line = 0;

	while (line <= n)
	{
		_putchar('_');
		line++;
		_putchar('\n');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
