#include <"main.h">
/**
 * _islower - returns 1 if lowercase, otherwise 0
 *
 * @c: alphabet
 *
 * Return: Always 0 (executed)
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n')
}
