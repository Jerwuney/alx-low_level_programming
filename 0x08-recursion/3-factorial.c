#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the input number
 *
 * Return: a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
