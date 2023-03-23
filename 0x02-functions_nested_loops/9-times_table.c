#include "main.h"

/**
* times_table - makes the 9 times table
*
* Return: Always 0 (executed)
*/

void times_table(void)
{
	int a;
	int b;
	int c;
	int m;
	int n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				m = (c % 10);
				n = (c - m) / 10;
				_putchar(', ');
				_putchar(n + '0');
				_putchar(m + '0');
			}
			else if (b != 0)
			{
				_putchar(',  ');
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}

}
