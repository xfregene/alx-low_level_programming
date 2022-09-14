#include "main.h"

/**
* abs - Computes the absolute value of an integer
*
* @n: input number
*
* Description: Prints the absolute value of a number,
* regardless of its sign.
*
* Return: absolute value of n
*/
int abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
	_putchar('\n');
}

