#include "main.h"

/**
 * _islower - This function checks if a character is lowercase or uppercase
 * @c: Is the int type that will be passed as an argument to this function
 * Return: 1 (Successful) and 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
