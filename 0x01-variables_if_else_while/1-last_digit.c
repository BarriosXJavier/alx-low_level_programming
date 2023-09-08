#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the last digit of a random number
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int lastDigit;

	/* initialize random seed */
	srand(time(0));

	/* generate a random number between -RAND_MAX / 2 and RAND_MAX / 2 */
	n = rand() - RAND_MAX / 2;

	/* get the last digit of n */
	lastDigit = n % 10;

	/* print the output */
	printf("Last digit of %d is %d ", n, lastDigit);

	/* check the condition of the last digit */
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}

