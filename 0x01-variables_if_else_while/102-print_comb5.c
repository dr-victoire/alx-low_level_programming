#include <stdio.h>

/**
 * main - the function where all the codes will be written
 * Description: This program prints all the possible combinations
 * of two two-digit numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (d >= c && c >= b && b >= a)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a != '9'|| b != '8'|| c != '9'|| d != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
