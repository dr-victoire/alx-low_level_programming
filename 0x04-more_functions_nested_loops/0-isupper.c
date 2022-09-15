#include "main.h"

/**
 * _isupper - This function checks whether an alphabet is upper
 * or lower case
 * Return: 1 (Successful) or 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
