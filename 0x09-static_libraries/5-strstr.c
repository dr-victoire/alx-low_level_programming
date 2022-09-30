#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the string we need to find the first occurence of
 *
 * Return: pointer to the begining of needle or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
		{
			return (begin);
		}

		haystack = begin + 1;
	}

	return (NULL);
}
