#include "main.h"

/**
 * print_rev - prints strings in reverse order
 * @s: input parameter
 * Return: s
 */

void print_rev(char *s)
{
	int len_s;

	len_s = 0;
	while (*s != '\0')
	{
		len_s++;
		s++;
	}
	s--;
	while (len_s > 0)
	{
		_putchar(*s);
		s--;
		len_s;
	}
	_putchar('\n');
}
