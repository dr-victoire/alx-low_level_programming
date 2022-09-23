#include "main.h"

/**
 * cap_string - captitalizes all the words of a string
 * @s: string argument
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && <= 'z')
		{
			s[i] -= 'a' - 'A';
		}

		i++;
	}

	return (s);
}
