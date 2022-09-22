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
	char *s1;
	char *s2;

	while (dest[i] != '\0')
	{
		++s1;
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		j++;
	}

	return (s1);
}
