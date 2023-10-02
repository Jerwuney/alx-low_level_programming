#include "main.h"

/**
 * _strlen - takes a string and returns the length
 * @s: input string
 * Return: Always 0 (executed)
 */

int _strlen(char *s)
{
	int len_s = 0;

	while (*s != '\0')
	{
		len_s++;
		s++;
	}
	return (len_s);
}
