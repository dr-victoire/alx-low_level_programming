#include "main.h"

/**
 * print_last_digit - This function returns the last digit of a number
 * @l: Is the int value the function takes as an argument
 * Return: 0 (Successful)
 */
int print_last_digit(int l)
{
	int a;

	a = l % 10;
	if (a < 0)
	{
		a *= -1;
	}
	_putchar(a + '0');

	return (a);
}
