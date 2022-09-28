#include "main.h"

/**
* _puts_recursion - Prints a string
*
* @s: String
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
