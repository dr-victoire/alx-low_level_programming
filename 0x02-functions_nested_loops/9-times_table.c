#include "main.h"

/**
 * times_table - This function prints the 9x table
 * Return: 0 (Successful)
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c;
			c = b * a;
			_putchar(c);
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
