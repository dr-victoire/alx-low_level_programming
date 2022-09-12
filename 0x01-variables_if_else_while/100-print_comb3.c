#include <stdio.h>

/**
 * main: the function where all codes will be written
 * Description: The main function will print all possible combinations
 * of double digit figures
 * Return: 0 (Successful)
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a <= '9')
	{
		while (b <= '9')
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
