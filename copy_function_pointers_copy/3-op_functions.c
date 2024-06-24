#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

/**
 * op_add - sum two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two numbers
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns the remainder after division
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - calculates the division of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}
