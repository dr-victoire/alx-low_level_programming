#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints numbers from user input to 98
 * @n: The int value the function takes as argument
 * Return: 0 (Successful)
 */
void print_to_98(int n)
{
	int a;

	for (a = n; a <= 98; a++)
	{
		_putchar(a);
		if (a > 98)
		{
			_putchar(a);
			a--;
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
