#include "main.h"

/**
 * print_line - prints the _ character
 * @n: the only argument this function returns
 *
 * Return: 0 (Successful)
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
