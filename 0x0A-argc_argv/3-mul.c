#include <stdio.h>

/**
* main - Multiplies two numbers
* @argc: Argument counter
* @argv: Argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
