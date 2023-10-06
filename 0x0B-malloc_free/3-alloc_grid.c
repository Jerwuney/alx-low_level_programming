#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to 2D array
 * @width: horizontal size of the array
 * @height: vertical size of the array
 *
 * Return: a pointer or NUll
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(s[a]);
			}
			free(s);
			return (0);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			s[a][b] = 0;
		}
	}
	return (s);
}
