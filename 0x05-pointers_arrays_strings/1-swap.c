#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: 0 (Successful)
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
