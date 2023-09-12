#include "main.h"
/**
 * 4-isalpha - Checks for an alphabet char
 * @c: Char under check
 * Return: 1 if true
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
