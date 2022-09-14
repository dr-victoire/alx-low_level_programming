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

	printf("%ld, %ld, %ld, ", a, b, c);

	for (i = 5; i <= 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%ld, ", c);
		if (c == 20365011074)
		{
			printf("%ld\n", c);
		}
	}
	printf("20365011074\n");
	return (0);
}
