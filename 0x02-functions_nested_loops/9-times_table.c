#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the 9 times table starting at 0
 */

void times_table(void)
{
	for(int i = 0; i <= 9; i++)
	{
	for(int j = 0; j <= 9; j++)
	{
		printf("%2d, ", i*j);
	}
 	printf("\n");
}
