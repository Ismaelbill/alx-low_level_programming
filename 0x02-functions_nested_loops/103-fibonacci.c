#include "main.h"

/**
 * main - function that prints the sum of the eve-valued terms
 *
 * Return: 0 (Success)
*/


int main(void)
{

	unsigned long i, current = 1, previous = 0, tmp = 0;
	float result = 0;

	for (i = 0; i < 4000000; i++)
	{
		tmp = current + previous;
		if (tmp % 2 == 0)
			result += tmp;
		previous = current;
		current = tmp;
	}
	printf("%.0f\n", result);
	return (0);
}
