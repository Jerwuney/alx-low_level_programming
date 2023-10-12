#include "3-calc.h"

int op_add(int x, int y);
int op_subt(int x, int y);
int op_mul(int x, int y);
int op_mod(int x, int y);
int op_div(int x, int y);

/**
 * op_add - sum two numbers
 * @x: 1st number
 * @y: 2nd number
 *
 * Return: the sum
 */

int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_subt - calculates the difference of two numbers
 * @x: 1st input
 * @y: 2nd input
 *
 * Return: the difference
 */

int op_subt(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - calculates the product of two numbers
 * @x: 1st number
 * @y: 2nd number
 *
 * Return: the product
 */

int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_mod - returns the remainder after division
 * @x: 1st number
 * @y: 2nd number
 *
 * Return: the remainder
 */

int op_mod(int x, int y)
{
	return (x % y);
}

/**
 * op_div - calculates the division of two numbers
 * @x: dividend
 * @y: divisor
 *
 * Return: the quotient
 */

int op_div(int x, int y)
{
	return (x / y);
}
