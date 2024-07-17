#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size,  mid, i;

	if (array == NULL)
		return (-1);

	while (start < end)
	{
		mid = ((end + start) / 2);
		printf("Searching in array: %d", array[start]);
		for (i = (start + 1); i < end; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (mid < value)
			start = mid + 1;
		else if (mid > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
