#include "main.h"
#include <stdlib.h>

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

s1len = _strlen(s1);
s2len = _strlen(s2);

s3 = malloc(sizeof(s3) * (s1len + s2len));
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
