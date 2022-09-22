#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: is added to dest
 *
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	char *s;
	*s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (s);
}
