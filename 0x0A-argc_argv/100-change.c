#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: size of argv
 * @argv: array of pointers
 * Return: returns (1) if it fails, otherwise (0)
 */


int main(int argc, char *argv[])
{
	int arr [] = {25, 10, 5, 2, 1}, i = 0, var = 0, j = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	var = atoi(argv[1]);
	while (var > 0 && !(var < 0))
	{
		if (var >= arr[i])
		{
			var -= arr[i];
			j++;
		}
		else
			i++;
	}
	printf("%i\n", j);
	return (0);
}
