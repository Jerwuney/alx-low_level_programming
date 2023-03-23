#include "main.h"
/**
 * print_last_digit - returns 1 if lowercase, otherwise 0
 *
 * @n: alphabet
 *
 * Return: Always 0 (executed)
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i + '0');
	return (i);
}
