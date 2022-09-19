#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: the string argument
 *
 * Return: 0 (Successful)
 */

void print_rev(char *s)
{
	int a = 0;
	int c, b;
	char word;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;

	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		word = s[b];
		s[b] = s[c];
		s[c] = word;
	}

	_putchar('\n');
}
