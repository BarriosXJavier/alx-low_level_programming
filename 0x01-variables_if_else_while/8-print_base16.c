#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
int i;
char c;
i = 0;
while (i < 10) /* loop for digits */
{
putchar(i + '0');
i++;
}
c = 'a';
while (c <= 'f') /* loop for letters */
{
putchar(c);
c++;
}
putchar('\n'); /* new line */
return (0);
}

