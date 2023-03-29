#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input parameter
 * Return: str half
 */

void puts_half(char *str)
{
	int i;
	int begin;
	int len_s;

	len_s = 0;

	for (i = 0; str[i] != '\0';  i++)
	{
		len_s++;
		begin = len_s / 2;
	}

	if (len_s % 2 == 1)
	{
		begin = (len_s + 1) / 2;
	}
	for (i = begin; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
