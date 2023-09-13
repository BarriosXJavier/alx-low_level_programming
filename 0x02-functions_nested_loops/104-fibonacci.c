#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Declare and initialize variables */
	unsigned long a = 1, b = 2;

    /* Print the first two Fibonacci numbers */
	printf("%lu, %lu", a, b);

    /* Calculate and print the next 96 Fibonacci numbers */
	for (int i = 2; i < 98; i++)
    	{
        /* Calculate the next Fibonacci number */
	unsigned long next = a + b;

        /* Print the next Fibonacci number */
	printf(", %lu", next);

        /* Update a and b for the next iteration */
	a = b;
	b = next;
	}

    /* Print a newline at the end */
	printf("\n");

    /* Return 0 to indicate successful execution */
	return (0);
}
