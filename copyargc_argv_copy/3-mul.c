#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number count
 * @argv: vector of number
 *
 * Return: a number
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc - 1 != 2)
	{
		printf("Error\n");

		return (1);
	}
	for (i = 1; i < argc - 1; i++)
	{
		prod = prod * atoi(argv[i]) * atoi(argv[i + 1]);
	}
	printf("%d\n", prod);

	return (0);
}
