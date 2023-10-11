#include "3-calc.h"

/**
 * main - function
 * @argc: size of array argv
 * @argv: array
 * Return: 0 in Success
*/

int main(int argc, char **argv)
{
	int (*ptrFunc)(int, int), a, b;

	if (argc != 4)
		printf("Error!\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptrFunc = get_op_func(argv[2]);
	if (!ptrFunc)
		printf("Error!\n"), exit(99);
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error!\n"), exit(100);
	printf("%d\n", ptrFunc(a, b));
	return (0);
}
