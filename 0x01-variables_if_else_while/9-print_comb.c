#include <stdio.h>

int main(void)
{
int i, j;

    /* loop over the first digit from 0 to 9 */
for (i = 0; i <= 9; i++)
{
        /* loop over the second digit from i + 1 to 9 */
for (j = i + 1; j <= 9; j++)
{
            /* print the pair of digits using putchar and adding '0' to convert to ASCII */
            /* use a ternary operator to print a comma and a space or a newline depending on the pair */
putchar(i + '0'), putchar(j + '0'), putchar((i == 8 && j == 9) ? '\n' : ',');
            /* print a space using putchar if the pair is not the last one (8, 9) */
if (i != 8 || j != 9)
putchar(' ');
}
}
    /* return 0 to indicate successful execution */
return (0);
}

