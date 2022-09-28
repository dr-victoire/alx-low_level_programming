#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length should be returned
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	len++;

	if (*s == '\0')
		return (len);
	s++;
	_strlen_recursion(s + 1);
}
