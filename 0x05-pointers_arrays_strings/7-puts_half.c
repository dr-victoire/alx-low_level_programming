#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string argument it takes
 *
 * Return: 0 (Successful)
 */

void puts_half(char *str)
{
	int a = 0;
	int b;
	int c;

	while (str[a] != '\0')
	{
		a++;

		if ((a + 1) % 2 != 0)
		{
			b = (a - 1) / 2;
		}
		else
		{
			b = a / 2;
		}
	}

	for (c = b + 1; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}
