#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array of the strings of argc
 *
 * Return: 0 (Successful) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, n;
	int sum = 0;
	char *flag;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], &flag, 10);

			if (*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
