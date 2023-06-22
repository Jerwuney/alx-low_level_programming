#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer to  the string
 * @needle: pointer to the substring to locate
 *
 * Return: a pointer or null if no match
 */

char *_strstr(char *haystack, char *needle)
{
	char *start = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			start = haystack;
			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
			{
				return (start);
			}
			haystack = start;
			needle = needle - (haystack - start);
		}
		haystack++;
	}
	return (0);
}
