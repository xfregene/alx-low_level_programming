#include "main.h"

/**
* main - prints the string "_putchar"
*
* Return: 0 (success)
*/
int main(void)
{
	char print[] = "_putchar"
	int in;

	for (in = 0; in < 8; in++)
	{
		_putchar(print[in]);
	}
	_putchar('\n');
	return (0);
}
