#include <stdio.h>

/**
 * main - The function where all the codes will be written
 * Description: This program prints the first 50 numbers in the 
 * FIbbonacci Sequence
 * Return: 0 (Successful)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int result;

	for (int i = 1; i < 50; i++)
	{
		printf("%d", a);
		result = a + b;
		result = b;
		printf("%d, ", b);
	}
	printf("\n");
}
