#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: nothing
 */

int main(void)
{
	char *s = "hello world";
	char *f = "olleh";
	unsigned int n;

	n = _strspn(s, f);

	printf("%u\n", n);

	return (0);
}