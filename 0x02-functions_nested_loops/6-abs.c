#include "main.h"
#include <stdio.h>
/**
 * _abs -absolute value of an integer
 * Return: absolute value of int
 */
int main(void)
{
	int r;
	r = abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n",r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-90);
	printf("%d\n", r);
	return(0);
}
