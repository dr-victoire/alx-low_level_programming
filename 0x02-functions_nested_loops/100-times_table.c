#include "main.h"

/**
 * print_times_table - prints the time table from 0 - n
 * @n: the integer it takes as argument
 *
 * Return: 0 (Successful)
 */

void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= 99)
				{
					_putchar(' ');
				}
				else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}

			}
		}
	}
}
