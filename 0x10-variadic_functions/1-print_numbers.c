#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - it prints some numbers
 * @separator: the string between the numbers
 * @n: the number of numbers to be printed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;

	va_list(thenumbers);
	va_start(thenumbers, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(thenumbers, unsigned int);
		printf("%d", numbers);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
