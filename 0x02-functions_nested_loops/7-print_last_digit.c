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
		return (l);
	}
	else
	{
		int a;

		a = l % 10;

		return (a);
	}
}
