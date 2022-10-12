#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	print_name("Bob", print_name);
	return (0);
}
