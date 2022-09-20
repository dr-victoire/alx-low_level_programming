#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void puts_half(char *str)
{
	int a;
	int b;
	int c;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a + 1 % 2 != 0)
	{
		b = (a - 1) / 2;
	}
	else
	{
		b = a / 2;
	}

	for (a = b; str[a] != '\0'; a++)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}
