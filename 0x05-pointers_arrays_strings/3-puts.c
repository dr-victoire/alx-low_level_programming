#include "main.h"

/**
 * _puts - prints a string and a newline
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void _puts(char *str)
{
	char word;

	while (*str != '\0')
	{
		word = str;
		_putchar(word);
		*str++;
	}

	_putchar('\n');
}
