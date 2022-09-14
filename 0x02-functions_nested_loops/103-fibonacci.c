#include <stdio.h>

/**
 * main - This is the function where all the codes will be written
 * Description: This program prints the sum of the even digits of the
 * Fibonacci sequences, whose values don't excceed 4,000,000
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;
	long int c;

	for (i = 0; i <= 50; i++)
	{
		c = a + b;
		printf("%ld, ", c);
	}
	return (0);
}
