#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: the input string
 *
 * Return: 0 upon success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
