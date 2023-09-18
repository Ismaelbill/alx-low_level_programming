#include "main.h"

/**
 * print_array - function that prints 'n' elements of an
 * array of integers
 *
 * @a: parameter 1
 *
 * @n: parameter 2
*/

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
