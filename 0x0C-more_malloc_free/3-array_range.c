#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: number
 * @max: number
 * Return: returns a pointer to an array
 */


int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
