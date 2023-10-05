#include "main.h"

/**
 * *create_array - creates an array of characters
 * @size: allocated size
 * @c: the input character
 *
 * Return: pointer to array or 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s == 0)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
