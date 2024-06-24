#include "main.h"
#include <limits.h>

/**
 *_atoi - a function that converts a string to an integer
 *@s: the string
 *
 *Return: the resulted integer
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		sign = (s[i] == '+') ? 1 : -1;
		i++;
	}
	while (s[i]  >= '0' && s[i] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (sign * res);
}
