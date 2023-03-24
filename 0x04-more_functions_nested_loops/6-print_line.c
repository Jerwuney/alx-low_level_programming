#include "main.h"

/**
 * print_line - draw line in the terminal
 * @n: value
 * Return: Always 0 (executed)
 */

void print_line(int n)
{
	int i;

	for (i =  0; i < n;  i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
