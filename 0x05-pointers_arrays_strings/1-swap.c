#include "main.h"

/**
* swap_int -
* Description:
* @a:
* @b:
* Return: void
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
