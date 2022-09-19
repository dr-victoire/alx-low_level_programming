#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string argument
 *
 * Return: 0 (Successful)
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
