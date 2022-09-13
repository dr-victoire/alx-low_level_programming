#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lower case
 * Return: 0 (Successful)
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
