#include "main.h"

/**
* _strchr - Locates a character in a string
*
* @s: Address
* @c: search
*
* Return: pointer to char c
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
