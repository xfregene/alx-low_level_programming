#include "main.h"
#include <stdlib.h>

/**
* _strlen - Calculates the length of a string
* @s: String
*
* Return: String length
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
* str_concat - Concatenates two strings
* @s1: First string
* @s2: Second string
*
* Return: Pointer to the string or null
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);

	s3 = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
