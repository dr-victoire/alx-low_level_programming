#include "main.h"

/** print_sign - This function tells whether a number is positive or negative
 * @n: Is the int value the function will return
 * Return: 1 (Successful), 0 (Equality) and -1 (Failure)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
