#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: array size
 * @action: the function pointer to execute
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
