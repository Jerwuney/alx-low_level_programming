#include "main.h"

/**
 * _strchr - a function that locate a character in a string
 * @c: the character to locate
 * @s: the string
 *
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	unsigned char uc = (unsigned char)c;

	while (*s != '\0')
	{
		if (*s == uc)
		{
			return (s);
		}
		s++;
	}
	if (uc == '\0')
	{
		return (s);
	}
	return (0);
}
