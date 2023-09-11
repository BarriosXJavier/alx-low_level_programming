#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 if successful
 */
int main(void)
{
int ch = 'a'; /* first lowercase letter */
while (ch <= 'Z') /* loop until last uppercase letter */
	{
        	if (ch > 'z' && ch < 'A') /* print new line and reset ch */
	{
	putchar('\n');
	ch = 'A';
	}
	putchar(ch); /* print current letter */
	ch++; /* next letter */
	}
putchar('\n'); /* final new line */
return (0);
}

