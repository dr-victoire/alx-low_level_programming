#include "main.h"
#include <stdio.h>>

/**
 * reverse_array - reverses the contents of an array
 * @a: the pointer to the array
 * @n: the number of items in an array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	/* initializing two variables */
	int i;
	int j;

	/* finding the last element of
	 * the array */
	j = n - 1;

	/* looping through the array from
	 * last to first */
	for (i = j; i <= 0; i--)
	{
		if (i == 0)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
