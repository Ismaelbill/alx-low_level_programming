#include "main.h"

/**
 * print_diagsums - function that prints the sum of
 *  the two diagonals of a square matrix of integers.
 * @a: array
 * @size: the dimensional of array
 */

void print_diagsums(int *a, int size)
{
	int i, result = 0, result1 = 0;

	for (i = 0; i < size; i++)
	{
		result += a[i];
		result1 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", result);
	printf("%d\n", result1);
}
