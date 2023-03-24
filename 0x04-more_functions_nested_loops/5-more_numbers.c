#include "main.h"

/**
 * more_numbers - prints 0 to 14 x10
 *
 * Return: Always 0 (executed)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
