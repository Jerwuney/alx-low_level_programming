#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - count from the input number to 98
 *
 * @n: input
 *
 * Return: Always 0 (executed)
 */

void print_to_98(int n)
{
	int i;

	if  (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
