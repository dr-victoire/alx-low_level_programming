#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets the corect operator to perform the arithmetic
 * @s: the operator
 *
 * Return: pointer to relevant function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
