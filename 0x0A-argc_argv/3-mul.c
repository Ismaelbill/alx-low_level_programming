#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: size of argv
 * @argv: array of strings
 * Return: returns (0) in Success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else if (argc < 3)
		printf("Error\n");
	return (0);
}
