#include "main."

/**
 * reverse_array - reverses the contents of an array
 * @a: array name
 * @n: number of elements in an array
 *
 * Return: Nothing
 */

void reverse-array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < (n - 1) / 2; b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c
	}
}
