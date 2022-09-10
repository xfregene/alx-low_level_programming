#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	int hex;

	hex = 0x0;
	while (hex <= 0xf)
	{
		putchar(hex + '0');
		hex++;
	}
	putchar('\n');
	return (0);
}
