#include "main.h"

/**
* swap_int - swap integer values
* Description: swaps the value of two integers
* @a: input pointer value
* @b: input pointer value
* Return: void
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
