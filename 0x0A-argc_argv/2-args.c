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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
