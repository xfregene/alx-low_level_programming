#include "main.h"

/**
* _memset - Fills memory with constant byte
* @s: address
* @b: character
* @n: No. of spaces
*
* Return: pointer to area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
