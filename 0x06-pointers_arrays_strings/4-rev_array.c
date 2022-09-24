#include "main.h"

/**
* reverse_array - Reverses contents of an array of integers
* @a: Array
* @n: No. of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
