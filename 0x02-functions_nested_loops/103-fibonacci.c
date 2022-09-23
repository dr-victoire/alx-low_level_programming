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
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;
	float sum;

	while (1)
	{
		c = a + b;

		if (c > 4000000)
		{
			break;
		}

		if (c % 2 == 0)
		{
			sum += c;
		}

		a = b;
		b = c;
	}

	printf("%.0f\n", sum);

	return (0);
}
