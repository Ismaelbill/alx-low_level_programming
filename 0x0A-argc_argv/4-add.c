#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: returns 0 if no number is passed,
 * 1 if one of the numbers contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argv[1] == NULL)
		printf("0\n");

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				if (atoi(argv[i]) > 0)
					sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
