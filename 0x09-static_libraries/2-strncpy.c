#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:the destination string after copying has ended
 * @src: the string that is copied
 * @n: the number of bytes copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
