#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabets x10
* description: print multiple
* Return: 0 (excuted)
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 1; j <= 11; j++)
			_putchar(i);
	}
	_putchar('\n');

}
