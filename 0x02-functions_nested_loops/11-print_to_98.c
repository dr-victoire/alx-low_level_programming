#include <stdio.h>

/**
 * print_to_98 - This function prints numbers from user input to 98
 * Return: 0 (Successful)
 */
void print_to_98(int n)
{
	int n;
	scanf(n);

	while (n <= 98)
	{
		putchar(n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
