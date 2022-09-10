#include <stdio.h>

/**
 * main - where all the code goes
 * Description: printing the alphabet backwards
 * Return: 0 (Successful)
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
