#include "main.h"

/**
 * _pow_recursion - returns one number raised to power another
 * @x: the input number
 * @y: the input number
 *
 * Return: a number
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
	return (x * _pow_recursion(x, y - 1));
}
