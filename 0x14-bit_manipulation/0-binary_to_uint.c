#include "main.h"
/**
 * binary_to_uint - Converts binary numbers to decimal numbers
 * @b: character pointer to the string containing the binary numbers
 * Return: the decimal
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int len, i, j, sum, power, base = 2;

    sum = 0;
    power = 1;

    if (b == NULL)
        return (0);

    for (len = 0; b[len] != '\0'; len++)
    {
        if (b[len] != '0' && b[len] != '1')
            return (0);
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        for (j = len - 1; j > 0; j--)
            power = power * base;

        sum = sum + (power * (b[i] - '0'));
        len--;
        power = 1;
    }

    return (sum);
}
