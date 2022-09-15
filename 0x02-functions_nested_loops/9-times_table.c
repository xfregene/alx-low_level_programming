#include "main.h"

/**
* time_table - Prints the 9 times table
*
* Description: Prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <=9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(result + '0');
		}
	}
	_putchar('\n');
}
