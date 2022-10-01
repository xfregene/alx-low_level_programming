#include <stdio.h>
#include <stdlib.h>

/**
* main - Adds positive numbers
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 if successful, 1 if not.
*/
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
