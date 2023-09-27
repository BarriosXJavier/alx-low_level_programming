#include "main.h"
#include "stdio.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n - 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate sqrt
 * @i: iterate no.
 *
 * Return: the natural square root
 */
int sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
i
	return (_sqrt(n, i + 1))
}
