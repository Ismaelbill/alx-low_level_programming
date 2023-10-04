#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: column of the array
 * @height: row of the array
 * Return: return NULL on failure,
 * else a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc((height) * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(*grid));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
