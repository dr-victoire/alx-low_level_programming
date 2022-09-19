#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string argument
 *
 * Return: 0 (Successful)
 */

void print_rev(char *s)
{
	char str;

	while (*s != '\0')
	{
		str = *s;
		_putchar(str);
		s--;
	}

	_putchar('\n');
}
