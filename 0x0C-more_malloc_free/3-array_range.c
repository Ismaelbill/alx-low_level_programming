#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr, i, length = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(length * sizeof(int));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i <= length; i++)
		ptr[i] = min++;
	return (ptr);
}
