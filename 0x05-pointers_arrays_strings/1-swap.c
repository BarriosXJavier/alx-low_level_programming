#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Does not return anything
 */
void swap_int(int *a, int *b)

/*The swap function*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
