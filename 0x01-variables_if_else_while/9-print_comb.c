#include <stdio.h>

/**
 * main - prints all the possible combination of
 * the first 10 single digits
 *
 * Return: 0 (executed)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
