#include <stdio.h>

int main() {
    int i, j;
    /* Iterate through the tens and ones digits */
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            /* Check if it's not the first combination */
            if (i != 0 || j != 0) {
                /* Print the two-digit number */
                putchar(i * 10 + j);

                /* Check if it's not the last combination */
                if (i != 9 || j != 9) {
                    putchar(',');    /* Print comma */
                    putchar(' ');    /* Print space */
                }
            }
        }
    }
    putchar('\n'); /* Print newline after all combinations */
    return 0;
}

