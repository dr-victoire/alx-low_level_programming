#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints numbers from user input to 98
 * @n: The int value the function takes as argument
 * Return: 0 (Successful)
 */
int print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, \n", n);
		n++;
	}
}
