#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0 Always
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	ptr = _strcat(s1, s2);

	printf("%s\n", ptr);

	return (0);
}
