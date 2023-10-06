#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to char  or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
	{
		return (0);
	}
	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s[a] = s2[b];
		a++, b++;
	}
	s[a] = '\0';
	return (s);
}
