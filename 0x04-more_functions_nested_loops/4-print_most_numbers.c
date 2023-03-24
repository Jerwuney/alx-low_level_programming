#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 *
 * Return: Always 0 (executed)
 */

void print_most_numbers(void)
{

	char i;

	for (i = '0'; i < '10'; i++)
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
		_putchar('\n');
}
