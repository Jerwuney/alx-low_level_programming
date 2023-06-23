#include "main.h"
#include "math.h"

typedef int make_iso_compilers_happy;

/**
 *is_divisible - check divisibility of num from i to sqrt(n)
 *@num: the first input
 *@i: secong input
 *Return: the check
 */
int is_divisible(int num, int i)
{
	if (i > sqrt(num))
	{
		return (0);
	}
	if (num % i == 0)
	{
		return (1);
	}
	return (is_divisible(num, i + 2));
}

/**
 * is_prime_number - returns 1 for a prime number otherwise 0
 * @n: the input number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n  == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (!is_divisible(n, 3));
}
