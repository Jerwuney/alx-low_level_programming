#include <stdio.h>

/**
 * main - The functon makes fizzbuzz calculation
 *
 * Return: Always 0 (executed)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			print("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}
