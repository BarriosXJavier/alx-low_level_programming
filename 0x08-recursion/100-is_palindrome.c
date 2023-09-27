#include "main.h"

/**
 * _strlen_recursion -returns a string's length
 * @s: string
 *
 * Return: The length
 *
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
 * Return: .
 */


int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 -1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *S)
{
	if (*s == '\0')
		return (1);
}
