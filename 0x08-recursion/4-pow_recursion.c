#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: the integer
 * @y: the exponent
 *
 * Return: the exponent of x or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	y--;

	return (x * _pow_recursion(x, y));
}
