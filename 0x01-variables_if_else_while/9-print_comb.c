#include <stdio.h>

/**
 * main - Entry point function for the codes
 * Description:This program prints every possible combinations
 * of single digit numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		a++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
