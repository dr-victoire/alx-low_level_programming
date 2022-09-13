#include "main.h"

/**
 * print_alphabet_x10 - This function prints the alphabet x10 in lowercase
 * Return: 0 (Successful)
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
