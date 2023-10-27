#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of arguments of argv
 * @argv: array of strings
 * Return: returns (0) in success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
