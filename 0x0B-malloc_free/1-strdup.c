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
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(*newstr));
	i = 0;
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}
