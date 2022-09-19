#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string argument
 *
 * Return: 0 (Successful)
 */

void puts2(char *str)
{
	int word;

	for (word = 0; str[word] != '\0'; word++)
	{
		if (word % 2 == 0)
		{
			_putchar(str[word]);
		}
	}

	_putchar('\n');
}
