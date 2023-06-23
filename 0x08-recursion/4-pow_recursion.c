#include "main.h"

/**
 * _pow_recursion - return the value of a number raised
 * to the power another
 * @x: the base
 * @y: the power
 *
 * Return: the results
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
	return (_pow_recursion(x * x, y / 2));
	}
	return (x * _pow_recursion(x, y - 1));
}
