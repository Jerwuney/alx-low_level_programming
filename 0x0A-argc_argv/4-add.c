#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - check if the input is a digit
 * @s: the input string
 *
 * Return: 1 if true, o otherwise
 */

int _isdigit(char *s)
{
	int i;
	int result = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			result = 0;
			break;
		}
	}
	return (result);
}
/**
 * main - prints the sum of positive numbers
 * @argc: number or arguments
 * @argv: vector of arguments
 *
 * Return: a number or error
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");

			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
