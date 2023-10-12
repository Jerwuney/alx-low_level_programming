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
	int (*f)(int x, int y);
} op_t;

int op_add(int x, int y);
int op_subt(int x, int y);
int op_mul(int x, int y);
int op_mod(int x, int y);
int op_div(int x, int y);
int (*get_op_func(char *s))(int, int);

#endif
