#include "main.h"

/**
 * _islower - This function checks if a character is lowercase or uppercase
 * Return: 1 (Successful) and 0 (Failure)
 */
int _intlower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
