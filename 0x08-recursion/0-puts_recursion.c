#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	_puts_recursion(s++);
}
