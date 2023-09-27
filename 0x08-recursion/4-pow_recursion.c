#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to y
 * @x: the value to multiply
 * @y: the number of times to multiply
 *
 * Return: The value multiplied by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
