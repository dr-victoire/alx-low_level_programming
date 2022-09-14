#include "main.h"

/**
 * times_table - This function prints the 9x table
 * Return: 0 (Successful)
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar('0');
		for (b = '1'; b <= '9'; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			if (a <= '9')
			{
				_putchar(' ');
			}
			else
			{
				_putchar(c);
			}
		}
		_putchar('\n');
	}
}
