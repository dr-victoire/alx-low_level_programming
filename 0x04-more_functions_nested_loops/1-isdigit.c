#include "main.h"

/**
 * _isdigit - checks whether or not a character is a digit
 * @c: This is the integer it takes as an argument
 * Return: 1 (if c is a digit) or 0 (otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' || c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
