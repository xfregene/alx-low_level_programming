#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: input value - destination
* @src: input value - source
*
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		if (*dest == '\0')
		{
			/*dest--;*/
			dest += *src;
			continue;
		}
		dest++;
	}
	/*dest += '\0';*/
	return (dest);
}
