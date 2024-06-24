#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: input character
 *
 * Return: Always 0 (executed)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
