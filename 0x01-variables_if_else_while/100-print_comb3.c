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

	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
