#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes c to stdout
 * @c: character
 *
 * Return: success 1.
 * Error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
