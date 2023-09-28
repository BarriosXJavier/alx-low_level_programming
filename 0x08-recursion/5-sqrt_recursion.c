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
	if (n < 0)
	return (-1); /* Square root of a negative number is undefined */
	return (_sqrt(n, 1)); /* Call _sqrt with the correct arguments */
}

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate sqrt
 * @i: iterate no.
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1); /* Square root not found */
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
