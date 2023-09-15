#include "main.h"

/**
 * main - function that prints the sum of the eve-valued terms
 *
 * Return: 0 (Success)
*/


int main(void)
{

	unsigned long current = 1, previous = 0, tmp = 0;
	float result = 0;

	while (1)
	{
		if (tmp >= 4000000)
			break;
		
		tmp = current + previous;
		if ((tmp % 2) == 0)
			result = result + tmp;
		previous = current;
		current = tmp;
	}
	printf("%.0f\n", result);
	return (0);
}
