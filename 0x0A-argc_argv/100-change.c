#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum of cents coins to give
 * @argc: number or arguments
 * @argv: vector of arguments
 *
 * Return: a number or error
 */

int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coin[] = {25, 10, 5, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	num = atoi(argv[1]);
	cents = 0;

	if (num < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		while (num >= coin[i])
		{
			cents++;
			num -= coin[i];
		}
	}
	printf("%d\n", cents);

	return (0);
}
