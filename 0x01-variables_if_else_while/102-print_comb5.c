#include <stdio.h>

/**
 * main - prints all the possible combination of
 *two digits without repetition, 'xy' == 'yx'
 *
 * Return: 0 (executed)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	
	putchar('\n');

	return (0);
}
