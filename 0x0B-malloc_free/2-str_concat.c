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
	unsigned int i, j, len1 = 0, len2 = 0, len;
	char *result;

	if (s1 != NULL)
	{
		i = 0;

		while (s1[i++] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;

		while (s2[i++] != '\0')
		{
			len2++;
		}
	}
	len = len1 + len2;
	result = malloc(sizeof(*result) * len + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[j] = s2[j];
	result[len] = '\0';

	return (result);
}
