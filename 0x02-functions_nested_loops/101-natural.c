#include <stdio.h>

/**
 * main - The function that bears all the code
 * Description: This program prints the sum of all multiples of 3 and 5
 * that are less than 1024
 * Return: 0 (Successful)
 */
int main(void)
{
	int t;
	int f;
	int sum_t = 0;
	int sum_f = 0;
	int sum_total;

	for (t = 0; t < 1024; t = t + 3)
	{
		sum_t = sum_t + t;
	}
	for (f = 0; f < 1024; f = f + 5)
	{
		sum_f = sum_f + f;
	}
	sum_total = sum_t + sum_f;
	printf("%d\n", sum_total);

	return (0);
}
