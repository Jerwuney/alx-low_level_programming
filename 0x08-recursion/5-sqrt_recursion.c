#include "main.h"

/**
 * perfect_square - a helper function
 * @num: first number
 * @i: second number
 *
 * Return: the square
 */

int perfect_square(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}
	if (i * i > num)
	{
		return (-1);
	}
	return (perfect_square(num, i + 1));
}

/**
 * _sqrt_recursion - a function that calculates a square root
 * @n: the input number
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (perfect_square(n, 1));
}
