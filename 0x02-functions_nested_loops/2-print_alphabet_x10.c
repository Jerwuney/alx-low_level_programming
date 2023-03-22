#include "main.h"

/**
* main - prints lowercase alphabets x10
* Description: print multiple
* Return: 0 (excuted)
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(i);
	}
	_putchar('\n');

	return (0);
}
