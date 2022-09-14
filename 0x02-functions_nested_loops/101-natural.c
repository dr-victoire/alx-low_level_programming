#include <stdio.h>

/**
 * main - The function that bears all the code
 * Description: This program prints the sum of all multiples of 3 and 5
 * that are less than 1024
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	int result;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			a += a;
			result = a;
		}
		printf("%d\n", result);
	}
}
