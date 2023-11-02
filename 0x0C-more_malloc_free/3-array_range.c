#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: number
 * @max: number
 * Return: returns a pointer to an array
 */


int *array_range(int min, int max)
{
	int *ptr, i, length;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = min++;
	return (ptr);
}
