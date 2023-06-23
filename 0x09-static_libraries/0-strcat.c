#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination init
 * @src: source init
 * Return: a pointer to the strins
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int len_dest = 0;
	int len_src = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i] != '\0'; i++)
		len_src++;
	for (i = 0; i <= len_src; i++)
		dest[len_dest + i] = src[i];

	return (dest);
}
