#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the count of the arguments
 * @argv: the array of the argc arguments
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
