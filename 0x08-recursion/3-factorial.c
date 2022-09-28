#include "main.h"

/**
* factorial - Displays the factorial of a number
*
* @n: Number
*
* Return: Factorial
*/
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
