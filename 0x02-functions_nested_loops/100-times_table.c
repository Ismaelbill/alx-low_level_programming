#include "main.h"

/**
 * print_times_table - function that prints 'n' times table starting with 0.
 *
 * @n: parameter of the function
*/

void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i < (n + 1); i++)
	{
		if (n < 0 || n >= 15)
			break;
		for (j = 0; j < (n + 1); j++)
		{
			result = (i * j);
			if (j == 0)
			{
				printf("%d", result);
				continue;
			}
			if (result < 10)
			{
				printf(",   %d", result);
			}
			else if (result >= 10 && result < 100)
			{
				printf(",  %d", result);
			}
			else
				printf(", %d", result);
		}
		printf("\n");
	}
}
