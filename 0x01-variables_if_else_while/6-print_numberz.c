#include <stdio.h>

/**
 * main - where the whole code will stay
 * Description: printing 0-9 with putchar
 * Return: 0 (Successful)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
