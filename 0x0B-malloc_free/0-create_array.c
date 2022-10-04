#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of characters
* @size: Array size
* @c: Character
*
* Return: Pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	*arr = c;
	return (arr);
}
