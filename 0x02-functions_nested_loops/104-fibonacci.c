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
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int sum;
	unsigned long int a1, a2, b1, b2, c1, c2;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}

	a1 = a / 10000000000;
	a2 = b / 10000000000;
	b1 = a % 10000000000;
	b2 = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		c1 = a1 + a2;
		c2 = b1 + b2;

		if (c2 > 9999999999)
		{
			c1 += 1;
			c2 %= 10000000000;
		}

		printf("%lu%lu", c1, c2);

		if (i != 98)
			printf(", ");

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}

	printf("\n");
	return (0);
}
