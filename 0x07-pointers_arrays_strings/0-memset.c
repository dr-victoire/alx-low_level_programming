#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to be filled with
 * @n: number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);
}
