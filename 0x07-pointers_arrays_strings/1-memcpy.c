#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: the final destination of the copied memory
 * @src: the memory area to be copied
 * @n: the number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
