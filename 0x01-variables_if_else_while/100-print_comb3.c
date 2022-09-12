#include <stdio.h>

/**
 * main - Entry Point
 * Description: printing possible combos of double digits
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <='9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
