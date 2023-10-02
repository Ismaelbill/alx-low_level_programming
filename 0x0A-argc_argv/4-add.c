#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: returns 0 if no number is passed,
 * 1 if one of the numbers contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ch;

	while (--argc)
	{
		/*for (ch = argv[argc]; *ch; ch++)*/
		{
			ch = argv[argc];
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
			ch++;
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
