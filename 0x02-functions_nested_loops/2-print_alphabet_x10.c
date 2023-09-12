#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	
	while (i < 10)
	{
		ch = '';
		while (ch <= '2')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
