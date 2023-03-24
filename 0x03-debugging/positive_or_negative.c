#include "main.h"
/**
 * positive_or_negative - checks a number's status
 *
 * @i: number
 *
 * Return: Always 0 (executed)
 */

void positive_or_negative(int i)
{
	if (i >= 0)
		printf("%d is positive", i);
	else
		printf("%d is negative", i);
}
