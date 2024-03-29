#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - uses a function to operate the maths
 * @s: the operator argument
 *
 * Return: a pointer to the right function to use
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
	{
		j++;
	}
	return (ops[j].f);
}
