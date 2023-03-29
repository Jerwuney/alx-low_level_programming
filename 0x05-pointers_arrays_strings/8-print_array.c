#include "main.h"

/**
 * print_array - prints strings in reverse order
 * @a: input arraay
 * @n: input int 2
 * Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
