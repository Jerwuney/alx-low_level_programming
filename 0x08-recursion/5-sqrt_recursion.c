#include "main.h"

/**
 * app_sqrt - an approximating squared root
 * @a: input value
 * @b: input value
 * @n: input value
 * Return: 0 (success)
 */

int app_sqrt(int n, int a, int b)
{
	int m;

	if (a > b)
	{
		return (-1);
	}
	m = (a + b) / 2;
	if (m * m == n)
	{
		return (m);
	}
	if (m * m < n)
	{
		return (app_sqrt(n, m + 1, b));
	}
	return (app_sqrt(n, a, m - 1));
}

/**
 * _sqrt_recursion - returns the factorial of a number
 * @n: the input number
 *
 * Return: a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (app_sqrt(n, 1, n));
}
