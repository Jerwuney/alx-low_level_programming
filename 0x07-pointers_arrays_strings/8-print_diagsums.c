#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to the array
 * @size: the size of the matrix
 *
 * Retun: sum of the diag
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int row = 0;
	int column = 0;

	while (row < size)
	{
		while (column < size)
		{
			if (row == column)
			{
				sum1 += a[row * size + column];
			}
			if (row + column == size - 1)
			{
				sum2 += a[row * size + column];
			}
			column++;
		}
		column = 0;
		row++;
	}
	printf("%d, %d\n", sum1, sum2);
}
