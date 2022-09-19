#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void puts2(char *str)
{
	int i;
	char d;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			d = str[i];
			_putchar(d);
		}
	}

	_putchar('\n');
}
