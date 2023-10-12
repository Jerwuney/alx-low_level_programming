#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array to search
 * @size: the array dimension
 * @cmp: pointer to your fucntion
 *
 * Return: 1st member of a non Null cmp or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}
	return (-1);
}
