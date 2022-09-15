#include <stdio.h>

/**
 * main - the entry point for the codes
 *
 * Description: This program prints all the numbers from 1 - 100
 * if it is a multiple of 3, it prints "Fizz" instead
 * if it is a multiple of 5, it prints "Buzz" instead
 * if it is a multiple of both 3 and 5, it prints "FizzBuzz"
 * Return: 0 (Successful)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			if (a != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	
	return (0);
}
