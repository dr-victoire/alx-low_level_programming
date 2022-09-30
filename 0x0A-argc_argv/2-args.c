#include <stdio.h>

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: an array of argc
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
