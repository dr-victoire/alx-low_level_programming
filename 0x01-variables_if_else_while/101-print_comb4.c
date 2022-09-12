#include <stdio.h>

/**
 * main: Entry Point for all the codes
 * Description: This program prints all possible combinations of
 * three digits
 * Return: 0 (Successful)
 */
int main(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' ||b != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
