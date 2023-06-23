#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: input character
 *
 * Return: Always 0 (executed)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
