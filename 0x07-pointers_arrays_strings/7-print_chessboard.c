#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: a pointer to the array
 *
 * Return: return the array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column  = 0;

	while (row < 8)
	{
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		column = 0;
		row++;
	}
}
