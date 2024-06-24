#include "stdio.h"

/**
 * main - prints a function name (1st argument)
 * @argc: the number of arguments given
 * @argv: one dimensional vector
 *
 * Return: 0 (executed)
 */

int main(int argc __attribute__((__unused__)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
