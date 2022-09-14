#include <stdio.h>

/**
 * main - The function where all the codes will be written
 * Description: This program prints the first 50 numbers in the 
 * FIbbonacci Sequence
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;
	long int a = 1;
       	long int b = 2;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 50; ++i)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
