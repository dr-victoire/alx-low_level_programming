#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;
	int d = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				d++;
				c = 1;
			}

			if (c == 0)
			{
				return (d);
			}
		}
	}

	return (0);
}
