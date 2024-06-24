#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *_strdup - returns a pointer to a new (duplicate)
 * @str: the string
 *
 * Return:  a pointer or NULL
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 0;
	char *s;

	if (str == 0)
	{
		return (0);
	}
	while (str[a] != '\0')
		a++;
	s = malloc(sizeof(char) * (a + 1));

	if (s == 0)
	{
		return (0);
	}
	for (b = 0; str[b]; b++)
	{
		s[b] = str[b];
	}
	return (s);

}
