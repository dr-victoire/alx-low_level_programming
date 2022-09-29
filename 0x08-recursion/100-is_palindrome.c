#include "main.h"

int get_strlen(char *s);
int check_palidrome(char *s, int i);
int is_palidrome(char *s);

/**
 * get_strlen - finds the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int get_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + get_strlen(s + 1));
	}
}

/**
 * check_palindrome - checks whether or not a string is a palindrome
 * @s: the string
 * @i: the counter integer
 *
 * Return: 1 if palindrome or 0 if not palindrome
 */

int check_palindrome(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (check_palindrome(s + 1, i - 2));
	}
}

/**
 * is_palindrome - checks whether or not a string is a palindrome
 * @s: the string
 *
 * Return: 1 if yes, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int len = get_strlen(s);

	return (check_palindrome(s, len--));
}
