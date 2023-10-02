#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: returns (0) in success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
