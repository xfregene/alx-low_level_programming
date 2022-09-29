#include "main.h"

/**
* _pow_recursion - Calculates the power of a number
*
* @x: number
* @y: power
*
* Return: Value of x raised to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
