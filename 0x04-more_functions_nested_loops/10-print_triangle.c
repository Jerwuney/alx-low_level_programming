#include "main.h"

/**
 * print_triangle - prints a trianble of # given the size
 * @size: value
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i + 1)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}
