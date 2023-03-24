#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: Always 0 (executed)
 */

void print_numbers(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
