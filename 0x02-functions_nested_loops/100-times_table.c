#include "main.h"

/**
 * print_times_table - prints the times table for n
 * @n: the only argument it takes
 *
 * Return: 0 (Successful)
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;
		int prod;

		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				prod = b * a;

				if (prod <= n)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
