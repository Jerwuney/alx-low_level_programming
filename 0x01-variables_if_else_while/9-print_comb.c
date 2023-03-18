#include <stdio.h>

/**
 * main - prints all the possible combination of
 * the first 10 single digits
 *
 * Return: 0 (executed)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
