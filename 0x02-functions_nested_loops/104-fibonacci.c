#include "main.h"

/**
 * main - function that prints the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
*/


int main(void)
{
	unsigned long  i, current = 1, previous = 0, tmp = 0;

	for (i = 0; i <= 89; i++)
	{
		tmp = current + previous;
		if (i == 89)
		{
			printf("%ld", tmp);
			break;
		}
		printf("%ld, ", tmp);
		previous = current;
		current = tmp;
	}
	printf("\n");
    return (0);
}
