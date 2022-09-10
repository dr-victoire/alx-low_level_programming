#include <stdio.h>

/**
 * main - the func where all the code goes
 * Description: Prints all the numbers of base 16
 * Return 0 (Successful)
 */
int main(void)
{
	int x = '0';
	int y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
