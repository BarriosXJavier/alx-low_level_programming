#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: char under check
 * Return 1  if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
