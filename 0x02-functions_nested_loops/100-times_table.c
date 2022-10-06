#include "main.h"

/**
 * print_times_table - prints times table till n
 * @n: the times table to be printed
 *
 * Return: Nothing
 */

void print_times_tables(int n)
{
	int i, j, prod;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = j * i;
				if (j == 0)
					_putchar(prod + '0');
				else if (prod < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				} else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				} else if (prod <= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}

			_putchar('\n');
		}
	}
}
