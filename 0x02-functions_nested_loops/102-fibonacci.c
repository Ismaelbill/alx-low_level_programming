#include "main.h"

/**
 * main - function that prints the first 50 fibonacci numbers
 *
 * Return: 0 (Success)
*/


int main(void)
{

	unsigned long int i, current = 1, previous = 0, tmp = 0;

	printf("%ld", previous);
	printf(", %ld", current);
	for (i = 0; i < 49; i++)
	{
		tmp = current + previous;
		printf(", %ld", tmp);
		previous = current;
		current = tmp;
	}
	printf("\n");
	return (0);
}
