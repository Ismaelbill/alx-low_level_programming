#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: returns (0) in success, 1 if the program does not receive two
 * arguments
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (argv[1] != NULL && argv[2] != NULL)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
