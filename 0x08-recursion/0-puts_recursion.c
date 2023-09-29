#include "main.h"

/**
 * _puts_recursion - prints a string then a new line
 * @s: the input string
 *
 * Return: 0 upon success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
