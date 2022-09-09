#include <stdio.h>

/**
 * main - where all the code will be written
 * Description: printing the alphabet except q & e
 * Return: 0 (Succesful)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x = 'e') {
			x++;
			continue;
		} else if (x = 'q') {
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
