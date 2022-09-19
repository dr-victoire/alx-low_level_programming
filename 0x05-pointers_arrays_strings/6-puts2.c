#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void puts2(char *str)
{
	char s;

	while (*str != '\0')
	{
		s = *str;
		_putchar(s);
		str += 2;
	}

	_putchar('\n');
}
