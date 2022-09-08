#include <stdio.h>

/**
* main - Program entry point
*
* Return: 0 (if successful)
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long)sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", (long)sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
