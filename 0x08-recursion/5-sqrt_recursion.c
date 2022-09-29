#include "main.h"

int _sqrt_recursion(int n);
int check_square_root(int i, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be checked
 *
 * Return: the natural square root of n
 * Or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (check_square_root(0, n));
	}
}

/**
 * check_square_root - checks the square root of an integer
 * @i: the square number
 * @n: the number to check for square root
 *
 * Return: 1 for success, and -1 for failure
 */

int check_square_root(int i, int n)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (1);
	}
	else
	{
		return (check_square_root(++i, n));
	}
}
