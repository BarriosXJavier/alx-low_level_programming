#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: The string
 * Return: The lenth of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
