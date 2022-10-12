#include "function_pointers.h"

/**
 * name_print - prints the name
 * @nom: the name to be orinted
 *
 * Return: Nothing
 */

void name_print(char *nom)
{
	int i = 0;
	int j;

	while (nom != '\0')
	{
		i++;
		nom++;
	}

	for (j = 0; j <= i; j++)
	{
		_putchar(nom[j]);
	}
}

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *))
{
	f = name_print;
	f(name);
}
