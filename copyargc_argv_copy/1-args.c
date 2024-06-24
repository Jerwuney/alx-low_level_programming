#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: 0 (executed)
 */

int main(int argc, __attribute__((__unused__))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
