#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: nothing
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}
