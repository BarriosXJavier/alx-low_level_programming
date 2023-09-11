#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:  all single-digit numbers in base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0; /* Initialize a variable to store the current digit (0-9) */
	while (digit <= 9) /* Loop until digit reaches 9 */
	{
		putchar(digit + '0'); /* Convert to ASCII character */
		digit++; /* Increment the digit for the next iteration */
	}

putchar('\n'); /* Print a newline character */
return (0); /* Exit the program */
}
