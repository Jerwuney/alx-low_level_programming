#include "main.h"

/**
 * print_number - prints integers
 * @n: value
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = 1;
	while (i <= n / 10)
	{
		i *= 10;
	}
	while (i >= 1)
	{
		_putchar(n / i + '0');
		n %= i;
		i /= 10;
	}
}
