#include "main.h"
/**
 * _isalpha - returns 1 if character, otherwise 0
 *
 * @c: alphabet
 *
 * Return: Always 0 (executed)
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
