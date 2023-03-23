<<<<<<< HEAD
#include <main.h>

/**
* _islower - checks if an alphabet is lowercase
* 
* Return: Always 0
*/

int _islower(int c)
{
	int c;

	if (c >= 97 <= 122; c++)
	{
		_putchar(1);
	}
	else
		_putchar(0);
=======
#include "main.h"
/**
 * _islower - returns 1 if lowercase, otherwise 0
 *
 * @c: alphabet
 *
 * Return: Always 0 (executed)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
>>>>>>> a7f38474a33c7d2101c13ee44203494d0831ae87
}
