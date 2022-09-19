#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void puts2(char *str)
{
	char word;

	while (*str != '\0')
	{
		str++;

		if (str % 2 == 0)
		{
			word = *str;
			_putchar(word);
		}
	}

	_putchar('\n');
}
