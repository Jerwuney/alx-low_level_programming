#include <stdio.h>

/**
 * main -n prints all single digits of base 10
 * Return: 0 (executed)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
