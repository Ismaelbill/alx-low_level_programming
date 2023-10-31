#include "main.h"

/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: returns a pointer to a 2 dimensional array of integers,
 * otherwise 'NULL'
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
