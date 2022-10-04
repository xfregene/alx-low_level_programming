#include "main.h"
#include <stdlib.h>

/**
* _strdup - Points to a new memory space holding a string
* @str: String argument
*
* Return: Pointer to string or null
*/
char *_strdup(char *str)
{
	char *newstr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
		i++;
	newstr = malloc(sizeof(*str) * i);
	if (newstr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j])
	{
		newstr[j] = str[j];
		j++;
	}
	return (newstr);
}
