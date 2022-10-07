#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: this program finds and prints
 * the largest prime factor of a number
 * Return: 0 (Successful)
 */

int main(void)
{
	long int num = 612852475143;
	long int counter;
	long int i;
	long int prime;
	long int large = 0;

	for (counter = 2; counter <= num; counter++)
	{
		if (num % counter == 0)
		{
			prime = 1;

			for (i = 2; i <= (counter / 2); i++)
			{
				if (counter % i == 0)
				{
					prime = 0;
					break;
				}
			}
		}
		if (prime == 1)
		{
			counter = large;
		}
	}

	printf("%ld\n", large);
	return (0);
}
