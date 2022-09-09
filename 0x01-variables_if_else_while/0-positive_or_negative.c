#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The program's entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Code to check the value of the number*/
	if (n > 0)
	{
		printf("%d is greater than 0\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is less than 0\n", n);
	}

	return (0);
}
