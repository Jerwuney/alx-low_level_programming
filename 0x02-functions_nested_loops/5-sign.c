#include "main.h"
/**
 * print_sign- returns 1 if lowercase, otherwise 0
 *
 * @n: a number
 *
 * Return: Always 0 (executed)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
