#include <stdio.h>

/**
 * main - Entry point for all codes in this program
 * Description: This program prints all possible combinations 
 * of two two-digit numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	int b;

	for (a = 00; a <= 98; a++)
	{
		for (b = 01; b <= 99; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(' ');
				putchar(b);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
