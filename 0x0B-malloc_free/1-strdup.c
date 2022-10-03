#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: the string to be copied
 *
 * Return: NULL if str = NULL
 * Or a pointer to the copied string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc(sizeof(*s) * len + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);

}
