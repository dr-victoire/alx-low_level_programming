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
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = a + b;
	unsigned long int sum;

	for (i = 3; i <= 4000000; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}

	for (c = 3; c <= 4000000; c++)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
	}

	printf("%lu\n", sum);

	return (0);
}
