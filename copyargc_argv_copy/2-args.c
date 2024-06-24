#include <stdio.h>

/**
 * main - prints all arguments it gets
 * @argc: argument count
 * @argv: vector of argument
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
