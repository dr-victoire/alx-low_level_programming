#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string argument
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
	}

	if (a % 2 != 0)
	{
		for (b = (a - 1) / 2; b <= str[a]; b++)
		{
			_putchar(b);
		}
	}
	else
	{
		for (b = (a / 2); b <= str[a]; b++)
		{
			_putchar(b);
		}
	}

	_putchar('\n');
}
