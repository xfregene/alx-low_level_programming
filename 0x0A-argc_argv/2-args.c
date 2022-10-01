#include <stdio.h>

/**
* main - Prints all the arguments it receives
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
