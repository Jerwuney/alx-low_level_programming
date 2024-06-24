#include "main.h"

/**
 * _memcpy - a function tha copies a memory
 * @dest: the destination memory
 * @src: the source memory area
 * @n: the number of bytes to copy
 *
 * Return: the destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d = 0;
	unsigned int s = 0;

	while (d < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
