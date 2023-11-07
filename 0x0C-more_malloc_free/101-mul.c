#include "main.h"

/**
 * main - program that multiplies two positive numbers
 * @argc: size of argv
 * @argv: array of size argc
 * Return: returns (0) in Success, otherwise exit 98
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
