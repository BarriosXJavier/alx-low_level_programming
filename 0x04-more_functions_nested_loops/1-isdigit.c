#include "main.h"
/**
 * _isdigit -Check if character is a digit
 * @x: Character to be checked
 * Return: 1 if the character is a digit. return 0 if not
 */

int _isdigit(char x)

{
	if (x >= 48 && x <= 57)
	{
	return(1);
	}
	return(0);
}
