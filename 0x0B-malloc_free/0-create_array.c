#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to initialize it with
 *
 * Return: NULL (Failure, or if size == 0)
 * Or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char str;

	if (size == 0)
	{
		return (NULL)
	}
	else if (size > 0)
	{
		str = malloc(sizeof(*str) * size);
		str[0] = c;

		return (str);
	}
	else
	{
		return (NULL);
	}
}
