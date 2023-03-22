#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
