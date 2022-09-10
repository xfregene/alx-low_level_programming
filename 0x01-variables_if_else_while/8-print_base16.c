#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	int hex;

	hex = '0';
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	hex = 'a';
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
