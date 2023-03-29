i#include "main.h"

/**
 * puts2 - prints every other charcter of a stringg
 * @str: input string
 * Return: str
 */

void puts2(char *str)
{
	int len_s = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len_s++;
	}
	x = len_s - 1;
	for (z = 0; z <= x; z++)
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	_putchar('\n');
}
