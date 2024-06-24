#include "main.h"

/**
 * wildcmp - checks if two strings can be considered identical
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
