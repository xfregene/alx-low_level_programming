#include "main.h"

/**
* _sqrt - Calculates square root
*
* @n: number
* @i: value
*
* Return: square root
*/
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - Gets the square root of a number
*
* @n: number
*
* Return: Square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
