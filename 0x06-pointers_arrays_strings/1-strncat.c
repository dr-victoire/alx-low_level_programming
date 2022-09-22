#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the string added to dest
 * @n: the highest number of bytes src will use
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
