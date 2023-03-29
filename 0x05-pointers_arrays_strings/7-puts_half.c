#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input parameter
 * Return: str half
 */

void puts_half(char *str)
{
	int len_s = 0;
	int begin;
	int i;
	begin = len_s / 2;

	while (*str != '\0')
	{
		len_s++;
		str++;
		/*begin = len_s / 2;*/
	}
	/*begin = len_s / 2;*/

	if (len_s % 2 == 1)
	{
		begin = (len_s - 1) / 2;
	}
	for (i = begin; i < len_s; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
