#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the list of types passed as argument
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int a;
	char *str;

	va_list(arglist);
	va_start(arglist, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arglist, int));
				a = 0;
				break;
			case 'i':
				printf("%d", va_arg(arglist, int));
				a = 0;
				break;
			case 'f':
				printf("%f", va_arg(arglist, double));
				a = 0;
				break;
			case 's':
				str = va_arg(arglist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				a = 0;
				break;
			default:
				a = 1;
				break;
		}
		if (format[i + 1] != '\0' && a == 0)
			printf(",");
		i++;
	}
	printf("\n");
}
