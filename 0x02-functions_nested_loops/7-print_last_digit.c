#include "main.h"

/**
 * print_last_digit - This function returns the last digit of a number
 * @l: Is the int value the function takes as an argument
 * Return: 0 (Successful)
 */
int print_last_digit(int l)
{
	if (l <= 9)
	{
		int a = l * 11;

		return (a);
	}
	else
	{
		int b;
		int c;

		b = l % 10;
		c = b * 11;

		return (c);
	}
}
