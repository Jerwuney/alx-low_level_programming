#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the bytes to match
 *
 * Return: pointer to the match
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != '\0')
	{
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
		p = accept;
	}
	return (0);
}
