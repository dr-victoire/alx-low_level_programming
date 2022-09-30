#include "main.h"

/**
 * _isupper - This function checks whether an alphabet is upper
 * or lower case
 * @c: the only argument the function takes
 *
 * Return: 1 (Successful) or 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
