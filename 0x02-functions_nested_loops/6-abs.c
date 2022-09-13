#include "main.h"

/**
 * _abs - This function returns the absolute value of a number
 * @n: This is the int value this function takes as an argument
 * Return: 0 (Successful)
 */
int _abs(int n)
{
	if (n < 0)
	{
		int a;

		a = n * -1;

		return (a);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
		return (n);
}
