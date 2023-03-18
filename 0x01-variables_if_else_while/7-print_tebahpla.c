#include <stdio.h>

/**
 * main -n prints all lowercase alphabets in reverse order
 * Return: 0 (executed)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
