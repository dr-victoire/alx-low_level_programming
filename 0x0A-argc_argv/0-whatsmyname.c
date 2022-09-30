#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array of strings of argc
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
