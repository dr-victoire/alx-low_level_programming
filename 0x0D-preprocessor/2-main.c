#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the name of the file it was compiled with
 * followed by a newline
 * Return: 0 (Successful)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
