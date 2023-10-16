#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

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

	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

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
