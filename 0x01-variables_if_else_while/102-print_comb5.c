#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			putchar(num1 + '0');
			putchar(num1 + '0');
			putchar(' ');
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 <= 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
