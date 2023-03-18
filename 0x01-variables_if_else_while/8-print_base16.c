#include <stdio.h>

/**
 * main -n prints all lowercase alphabets in reverse order
 * Return: 0 (executed)
 */

int main(void)
{
	int i;

	/* print 0-9 and then a-f */

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 0; i < 6; i++)
		putchar(i + 'a');

	putchar('\n');

	return (0);
}
