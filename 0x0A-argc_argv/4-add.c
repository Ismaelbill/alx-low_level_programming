#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: size of argv
 * @argv: array of strings
 * Return: returns (0) in Success, otherwise
 * (1)
 */


int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (strlen(argv[i]) > 1)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (!((argv[i][j]) >= 48 && (argv[i][j]) <= 57))
					{
						printf("Error\n");
						return (1);
					}
				}

				result += atoi(argv[i]);
			}
			else if (strlen(argv[i]) == 1 && argv[i][0] >= 48 && argv[i][0] <= 57)
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
