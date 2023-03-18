#include <stdio.h>

/**
 * main -n prints all lowercase alphabets except q and e
 * Return: 0 (executed)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
