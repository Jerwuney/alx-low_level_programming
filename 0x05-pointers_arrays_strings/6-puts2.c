#include "main.h"

/**
 * puts2 - prints every other charcter of a stringg
 * @str: input string
 * Return: str
 */

void puts2(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
