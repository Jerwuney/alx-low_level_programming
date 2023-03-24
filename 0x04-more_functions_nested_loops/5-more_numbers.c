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

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
