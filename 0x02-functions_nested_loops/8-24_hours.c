#include "main.h"

/**
 * jack_bauer - This function prints every single minute of Jack Bauer
 *
 * Return: 0 (Successful)
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = i % 10;
i	int l = j % 10;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i);
			_putchar(':');
		}
		else if (i < 20)
		{
			_putchar('1');
			_putchar(k);
			_putchar(':');
		}
		else
		{
			_putchar('2');
			_putchar(k);
			_putchar(':');
		}
		for (j = 0; j < 60; j++)
		{
			if (j < 10)
			{
				_putchar('0');
				_putchar(j);
				_putchar('\n');
			}
			else if (j < 20)
			{
				_putchar('1');
				_putchar(l);
				_putchar('\n');
			}
			else if (j < 30)
			{
				_putchar('2');
				_putchar(l);
				_putchar('\n');
			}
			else if (j < 40)
			{
				_putchar('3');
				_putchar(l);
				_putchar('\n');
			}
			else if (j < 50)
			{
				_putchar('4');
				_putchar(l);
				_putchar('\n');
			}
			else
			{
				_putchar('5');
				_putchar(l);
				_putchar('\n');
			}
		}
	}
}
