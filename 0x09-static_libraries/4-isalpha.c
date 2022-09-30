#include "main.h"

/**
 * _isalpha - This function checks whether a character is an alphabet
 * @c: Is the int value the function takes as an argument
 * Return: 1 (Successful,  c is a letter) 0 (Failure, c is not a letter)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
