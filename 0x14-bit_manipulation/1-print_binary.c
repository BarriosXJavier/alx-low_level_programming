#include <stdio.h>

void print_binary(unsigned long int n) {
    unsigned long int mask = 1;

    while (mask) {
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask = mask << 1;
    }
}
