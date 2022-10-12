#include <stdio.h>
#include "calc.h"

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
}
