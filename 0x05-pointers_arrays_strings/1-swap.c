#include "main.h"

/**
 * swap_int - takes two integers and swap them
 * @a: input int 1
 * @b: input int 2
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
