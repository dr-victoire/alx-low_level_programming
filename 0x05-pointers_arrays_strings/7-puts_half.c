#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; i++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
