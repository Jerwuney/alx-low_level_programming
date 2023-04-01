#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: destination init
 * @src: source init
 * @n: num of char
 * Return: a pointer to the strins
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0'
		i++;
	}
	return (dest);
}
