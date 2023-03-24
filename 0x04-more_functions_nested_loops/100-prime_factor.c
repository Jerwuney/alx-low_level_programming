#include <stdio.h>

/**
 * main - The functon makes calculates the largest prime
 *
 * Return: Always 0 (executed)
 */

int main(void)
{
	unsigned long n;
	unsigned long biggest_factor;
	unsigned long i;

	n = 612852475143;
	biggest_factor = 1;

	while (n % 2 == 0)
	{
		biggest_factor = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
		while (n % i == 0)
		{
			biggest_factor = i;
			n /= i;
		}
	if (n > 2)
	{
		biggest_factor = n;
	}
	printf("%lu\n", biggest_factor);

	return (0);
}
