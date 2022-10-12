#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
