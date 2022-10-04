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
	i = 1;
	while (str[i] != '\0')
		i++;
	newstr = malloc(sizeof(*str) * i);
	j = 0;
	while (str[j])
	{
		newstr[j] = str[j];
		j++;
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}
