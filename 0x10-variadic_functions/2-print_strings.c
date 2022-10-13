#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string that seperates the other strings
 * @n: the number of strings to be printed
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list(stringlist);
	va_start(stringlist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(stringlist, char *);
		printf("%s", string);
		if (string == NULL)
			string = "(nil)";
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		if (separator == NULL)
		{
			separator = "";
			printf("%s", separator);
		}
	}

	printf("\n");
}
