#include "main.h"

/**
* print_last_digit -  Prints the last digit of a number
*
* @n: input number
*
* Description: Returns the value of the last digit of a number.
*
* Return: the last digit.
*/
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	return (digit);
}
