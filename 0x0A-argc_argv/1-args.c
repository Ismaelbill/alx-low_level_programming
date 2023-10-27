#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: size of 'argv'
 * @argv: arrays of strings
 * Return: return (0) in success
 */


int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
