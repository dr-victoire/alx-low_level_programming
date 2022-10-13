#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the numbers
 * @n: the count of numbers to sum
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		int result = 0;
		va_list(sumlist);
		va_start(sumlist, n);

		for (i = 0; i < n; i++)
		{
			result = result + va_arg(sumlist, unsigned int);
		}

		return (result);
	}
	else
		return (0);
}
