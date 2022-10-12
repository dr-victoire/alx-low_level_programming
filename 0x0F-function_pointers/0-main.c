#include <stdio.h>
#include "function_pointers.h"

void print_name_as(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	print_name("Bob", print_name_as);
	return (0);
}
