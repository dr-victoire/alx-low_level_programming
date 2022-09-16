#include "main.h"

/**
 * print_times_table - prints the times table for n
 * @n: the only argument it takes
 *
 * Return: 0 (Successful)
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');

		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= n)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
