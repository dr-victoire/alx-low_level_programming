#include "main.h"

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
	unsigned int i, len;

	s = malloc(sizeof(*s) * len);

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = s[i];
	}
	if (str == NULL)
	{
		return (NULL);
	}

	return (s);

}
