#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: the separator between the strings
 * @n: number of integers supplied
 * @...: variable arguments
 *
 * Return: strings with a separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	char *str;
	unsigned int i;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(str_list);
}
