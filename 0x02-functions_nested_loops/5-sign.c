#include "main.h"

/**
 * 5-print_sign - prints a number's sign
 * Return: 1 , prints + if n is greater than 0, - if n < 0
 */
int print_sign(int n);
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
