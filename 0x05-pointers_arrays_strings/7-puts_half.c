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

		b++;
	}

	for (a = b; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
