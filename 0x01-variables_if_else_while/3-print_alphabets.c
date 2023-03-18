#include <stdio.h>

/**
 * main - prints lower and uppercases alphabets
 * Return: 0 (executed)
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
