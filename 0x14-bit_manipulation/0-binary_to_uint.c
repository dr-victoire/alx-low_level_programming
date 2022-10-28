#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the pointer to the array of binary chars
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
			break;
		}
		else
		{
			sum <<= 1;
			if (b[i] == '1')
				sum += 1;
		}
	}

	return (sum);
}
