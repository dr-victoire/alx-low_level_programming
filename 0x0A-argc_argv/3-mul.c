#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array of strings of argc
 *
 * Return: 0 (Successful) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int num1;
	int num2;
	int mul;

	if (argc !=  3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (i == 1)
			{
				num1 = atoi(argv[i]);
			}
			if (i == 2)
			{
				num2 = atoi(argv[i]);
			}
		}

		mul = num1 * num2;
		printf("%d\n", mul);
	}

	return (0);
}
