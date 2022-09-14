#include "main.h"

/**
* _islower - checks for lowercase character
*
* Return: 1 for lowercase. 0 for not lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
