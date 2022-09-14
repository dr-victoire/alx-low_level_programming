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
	int a = 1;
	int b = 2;
	int c = a + b;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
