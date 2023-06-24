#include "main.h"

/**
 *_strlen_recursion - finds the length of a string
 *@s: the input string
 *
 *Return: returns the length
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
 *build_palindrome - finds if the substring is a pal
 *@s: input string
 *@start: beginning index
 *@end:end index of the substring
 *
 *Return: 1 for a palindrome, otherwise 0
 */

int build_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (build_palindrome(s, start + 1, end - 1));
}

/**
 *is_palindrome - checks if a word is a palindrome
 *@s: the pointer to the word
 *
 *Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (build_palindrome(s, 0, len - 1));
}
