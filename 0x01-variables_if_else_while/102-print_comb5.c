#include <unistd.h>

/**
 * print_two_digit - Print a two-digit number
 * @num: The number to be printed
 */
void print_two_digit(int num) {
    putchar(num / 10 + '0');
    putchar(num % 10 + '0');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main() {
    for (int i = 0; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            print_two_digit(i);
            putchar(' ');
            print_two_digit(j);

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

