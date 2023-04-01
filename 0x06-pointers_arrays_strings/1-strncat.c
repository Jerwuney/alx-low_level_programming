#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination init
 * @src: source init
 * @n: required number of characters
 * Return: a pointer to the strins
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len_dest;
	int len_src;

	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i] != '\0'; i++)
		len_src;
	for (i = 0; i < n; i++)
		dest[len_dest + i] = src[i];

	return (dest);
}
