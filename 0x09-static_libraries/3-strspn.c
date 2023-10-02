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
	unsigned int j = 0;
	int i;

	while (s[n] != '\0')
	{
		i = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[n] == accept[j])
			{
				i = 1;
				break;
			}
		}
		if (i)
		{
			n++;
		}
		else
		{
			break;
		}
	}
	return (n);
}
