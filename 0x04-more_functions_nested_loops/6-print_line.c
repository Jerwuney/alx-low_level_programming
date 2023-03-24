#include "main.h"

/**
 * print_line - draw line in the terminal
 * @n: value
 * Return: Always 0 (executed)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i =  0; i < n;  i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
