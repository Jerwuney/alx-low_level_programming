#include <stdio.h>
/**
 * main- Prints the sizes and types on the computer
 * Return: 0 (completed executing)
 */
int main(void)
{
	/* declarations */
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	/* statements */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
