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
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	int len;
	char *result;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}

	len = len1 + len2;

	result = malloc(sizeof(*result) * len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[j] = s2[j];
	}

	result[len] = '\0';

	return (result);
}
