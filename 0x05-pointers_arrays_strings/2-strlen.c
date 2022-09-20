#include "main.h"

/**
* _strlen - Count string length
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
