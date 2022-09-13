#include "main.h"

/**
 * main - the function that carries all the code
 * Description: This program prints the alphabet in lower case
 * Return: 0 (Successful)
 */
int main(void)
{
	void print_alphabet(void)
	{
		int x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
	return (0);
}
