#include <stdio.h>

int main(void)
{
int ch;
    /* print lowercase letters */
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
    /* print a new line */
putchar('\n');
 /* print uppercase letters */
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
    /* print another new line */
putchar('\n');
return (0);
}

