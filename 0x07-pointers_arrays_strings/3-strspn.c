#include "main.h"

/**
 * _strspn - a function that finds the substring prefix
 * @s: the substring
 * @accept: contains the characters
 *
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i = 1;
				break;
			}
			accept++;
		}
		if (i)
		{
			n++;
		}
		else
		{
			break;
		}
		s++;
		accept -= n;
	}
	return (n);
}
