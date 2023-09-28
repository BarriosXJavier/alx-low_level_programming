#include "main.h"

/**
 * _strlen_recursion - returns a string's length
 * @s: string
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - compare each character in the strings
 * @s: string
 * @n1: smallest iterator
 * @n2: largest iterator
 * Return: 1 if palindrome, 0 if not
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 >= n2)
			return (1);
		return (compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @S: string
 * Return: 1 if S is a palindrome, 0 if not
 */
int is_palindrome(char *S)
{
	int len = _strlen_recursion(S);

	if (len <= 1)
	return (1);
	return (compare(S, 0, len - 1));
}
