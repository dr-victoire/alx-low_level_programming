#include "main.h"

/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: 0 (Successful)
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
	}

	_putchar('\n');
}