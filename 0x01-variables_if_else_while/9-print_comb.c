#include <stdio.h>
int main(void)
{
int i;
    /* loop over the digits from 0 to 9 */
for (i = 0; i <= 9; i++)
{
        /* print the digit using putchar and adding '0' to convert to ASCII */
putchar(i + '0');
        /* print a comma and a space using putchar if the digit is not the last one (9) */
if (i != 9)
putchar(',');
putchar(' ');
}
    /* print a newline character using putchar */
putchar('\n');
    /* return 0 to indicate successful execution */
return (0);
}

