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

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
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
