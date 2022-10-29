#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
