#include "main.h"

/**
* _abs - Computes the absolute value of an integer
*
* @n: input number
*
* Description: Prints the absolute value of a number,
* regardless of its sign.
*
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		return (n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}

