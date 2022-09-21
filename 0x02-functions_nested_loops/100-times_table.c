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

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;

				if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
