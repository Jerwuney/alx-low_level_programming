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

/**
 * is_prime_number - returns 1 for a prime number otherwise 0
 * @n: the input number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n  == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (perfect_square(n, 3));
}
