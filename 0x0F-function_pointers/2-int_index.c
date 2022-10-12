#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array name
 * @size: the array size
 * @cmp: the function pointer to compare the integers
 *
 * Return: -1 if size is <= 0 0r failure, and the index on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL  && cmp != NULL)
	{
		i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}

	return (-1);
}
