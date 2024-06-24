#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: the separator between the numbers
 * @n: number of integers supplied
 * @...: variable arguments
 *
 * Return: integer or 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num_list);
}
