#include "main.h"

/**
 * more_numbers -prints 0-14 ten times
 * Return:void
 */
void more_numbers(void)
{

int i, j;
	
	for (i = 1; j <= 14; j++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
	}
}
