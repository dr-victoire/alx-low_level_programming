#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be reversed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(s[i]);
	}
	else
	{
		_print_rev_recursion(s);
		s--;
	}
}
