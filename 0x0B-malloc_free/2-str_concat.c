#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL (On Failure)
 * The pointer to the new concatenated string (On Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	int len;
	char *result;

	while (*s1 != '\0')
	{
		len1++;
	}

	while (*s2 != '\0')
	{
		len2++;
	}

	len = len1 + len2;

	result = malloc(sizeof(*result) * len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s1[i] = result[i];
	}

	for (j = 0; j < len2; j++)
	{
		s2[j] = result[j];
	}

	result = '\0';

	return (result);
}
