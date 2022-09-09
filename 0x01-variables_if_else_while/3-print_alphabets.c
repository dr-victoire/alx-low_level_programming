#include <stdio.h>

/**
 * main - where all the codes will go
 * Description: lower and upper case letters
 * Return: 0 (Successful)
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
