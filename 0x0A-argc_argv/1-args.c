#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: returns (0) in success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
