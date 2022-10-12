#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: a
 * @b: b
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: a
 * @b: b
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: a
 * @b: b
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a nad b
 * @a: a
 * @b: b
 *
 * Return: a * b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus a nad b
 * @a: a
 * @b: b
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
