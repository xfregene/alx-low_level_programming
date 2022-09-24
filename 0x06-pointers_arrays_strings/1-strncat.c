#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: input - destination
* @src: input - source
* @n: input - no. of bytes
*
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	for (j = 0; src[j] != '\0' && j < n j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
