#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	int num;

	num = '0';
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
