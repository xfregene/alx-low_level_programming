#include "main.h"

/**
* _puts - Prints a string to stdout
* @str: string input value
*
* Return: void
*/
void _puts(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
