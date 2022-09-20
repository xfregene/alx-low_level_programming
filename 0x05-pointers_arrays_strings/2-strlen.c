#include "main.h"

/**
* _strlen -
* Description: Returns the length of a string
* @s: input pointer value
* Return: len
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
