#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the 9 times table starting at 0
 */

void times_table(void)
{
	 int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	printf("%d * %d = %d\n", i, j, i * j);
	}
	}
}
