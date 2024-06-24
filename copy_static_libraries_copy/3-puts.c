#include "main.h"

/**
 * _puts - prints the string entered and a newline
 * @str: input string
 * Return: str
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
