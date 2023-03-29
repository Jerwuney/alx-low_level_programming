#include "main.h"

/**
 * print_rev - prints strings in reverse order
 * @s: input parameter
 * Return: s
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
