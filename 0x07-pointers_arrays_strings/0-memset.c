#include "main.h"

/**
 * _memset - files a memeory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: constant byte value
 * @n: number of bytes to be filled
 *
 *Return: the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}

	return (s)
}
