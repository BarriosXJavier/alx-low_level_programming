#include <stdio.h>

int main() {
    /* Iterate through the tens and ones digits */
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            /* Print the tens digit (i) if not zero */
            if (i != 0 || j != 0) {
                putchar(i + '0');    /* Convert to character and print */
                putchar(',');         /* Print comma */
                putchar(' ');         /* Print space */
            }
            putchar(j + '0');        /* Convert to character and print the ones digit */
            putchar('\n');           /* Print newline to separate combinations */
        }
    }
    return 0;
}

