#include "main.h"

/**
 * main - function prints numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
			continue;
		}
		if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
