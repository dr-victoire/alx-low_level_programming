#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the bytes to be searched for
 *
 * Return: a pointer to the byte in the string or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
