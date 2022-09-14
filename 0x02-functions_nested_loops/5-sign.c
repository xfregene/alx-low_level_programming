#include "main.h"

/**
* print_sign - Prints the sign of a number
*
* @n: The integer number that is taken as input.
*
* Description: Checks the input and prints whether the
* number is positive, negative, or zero.
*
* Return: 1 if n is positive, 0 if it's 0, -1 if it's negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
