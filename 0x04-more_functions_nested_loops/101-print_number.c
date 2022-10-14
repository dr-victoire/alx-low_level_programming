#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}

	putchar((i % 10) + '0');
}
