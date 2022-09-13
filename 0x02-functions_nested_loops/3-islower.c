#include "main.h"

/**
 * _islower - This function checks if a character is lowercase or uppercase
 * Return: 1 (Successful) and 0 (Failure)
 */
int _intlower(int c)
{
	int r;

	if ("97" <= c && c <= "122")
	{
		r = 1;
		return (1);
	} else if (65 <= c && c <= 90)
	{
		r = 0;
		return (0);
	}
}
