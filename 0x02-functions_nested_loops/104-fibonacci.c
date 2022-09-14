#include <stdio.h>

/**
 * main - The function where all the codes will be written
 * Description: This program prints the first 98 numbers in
 * the Fibonacci sequence
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = a + b;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 98; ++i)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
