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

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c = '2'; c <= '7'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '9' || b != '8' || c != '7')
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
