#include "main.h"

/**
 * print_diagonal - prints diagonal n times
 * @n: only integer this function takes
 *
 * Return: 0 (Successful)
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
