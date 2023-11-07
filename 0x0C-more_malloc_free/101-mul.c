#include "main.h"

/**
 * main - program that multiplies two positive numbers
 * @argc: size of argv
 * @argv: array of size argc
 * Return: returns (0) in Success, otherwise exit 98
 */

int main(int argc, char *argv[])
{
	if (argc > 3 || argc <= 1)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
