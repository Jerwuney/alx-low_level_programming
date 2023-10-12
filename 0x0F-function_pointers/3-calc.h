#ifndef CALC_H
#define CALC_H

/**
 * struct op - a defined structure op
 * @op: pointer to the operator
 * @f: pointer to the function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_subt(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
