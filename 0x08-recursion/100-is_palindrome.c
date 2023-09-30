#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: the input string
 *
 * Return: a number
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * app_palindrome - a helper function to check if a word is a palindrome
 * @s: the workd (string)
 * @a: begining of s
 * @b: ending of s
 * Return: 0 (success)
 */

int app_palindrome(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if (s[a] != s[b])
	{
		return (0);
	}
	return (app_palindrome(s, a + 1, b - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the stirng
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (app_palindrome(s, 0, len - 1));
}
