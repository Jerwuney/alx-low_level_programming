#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input parameter
 * Return: s reversed
 */

void rev_string(char *s)
{
	int len_s;
	char *last;
	char tmp;

	len_s = 0;
	last = s;

	while (*last != '\0')
	{
		len_s++;
		last++;
	}
	last--;
	while (s < last)
	{
		tmp = *s;
		*s = *last;
		*last = tmp;

		s++;
		last--;
	}
}
