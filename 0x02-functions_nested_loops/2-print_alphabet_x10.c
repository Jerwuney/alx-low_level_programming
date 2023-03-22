#include "main.h"

/**
* main - prints lowercase alphabets x10
*
* Return: 0 (excuted)
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 1; j <= 10; j++)
			_putchar(i);
	}
	_putchar('\n')

	return (0);
}
