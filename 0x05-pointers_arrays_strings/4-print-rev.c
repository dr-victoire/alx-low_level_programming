#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string argument
 *
 * Return: 0 (Successful)
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putcha('\n')'
}
