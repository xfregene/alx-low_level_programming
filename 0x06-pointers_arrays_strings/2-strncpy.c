#include "main.h"

/**
* _strncpy - Copies a string
* @dest: input - destination
* @src: input - source
* @n: input - no. of bytes
*
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
