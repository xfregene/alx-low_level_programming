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
	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
