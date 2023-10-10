#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: size of memory to allocate
 *
 * Return: a pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
