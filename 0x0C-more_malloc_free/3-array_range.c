#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr, i, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == 0)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		ptr[i] = j;
	return (ptr);
}
