#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: the input string
 *
 * Return: a number
 */

int _strlen_recursion(char *s)
{
	int len_string = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len_string++;
	len_string += _strlen_recursion(s + 1);
	return (len_string);
}
