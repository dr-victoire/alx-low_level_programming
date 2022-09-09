#include <stdio.h>

/**
 * main - the function where the code stays
 * Description: prints alphabets in lowercase
 * Return: 0 (Successful)
 */
int main(void)
{
	int x = 'a';
	while (x <= 'z')

	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
