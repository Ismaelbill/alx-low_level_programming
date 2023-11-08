#include "3-calc.h"

/**
 * main - function prints the result returned from pointer
 * function
 * @argc: size of argv
 * @argv: array of size argc
 * Return: (0) in Success, otherwise (98), (99), (100)
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*func)(int, int);

	if (argc != 4 || argc == 1)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]), y = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(x, y));
	return (0);
}
