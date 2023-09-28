#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support using recursion.
 * @s1: The first string to compare.
 * @s2: The pattern string with wildcard (*).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    // If we reach the end of both strings, they are identical
	if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*'))
		return (1);

    // If the current characters match or s2 has a wildcard
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

		return (0);
}
