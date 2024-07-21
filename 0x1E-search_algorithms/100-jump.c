#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @arr:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located, otherwise
 * -1
 */


int jump_search(int arr[], size_t size, int value)
{
	int step = sqrt(size), next = 0, prev = 0, i, asideVal;

	if (!arr)
		return (-1);

	while (value > arr[next] && next < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", next, arr[next]);
		prev = next;
		next += step;
		if (next > (int) size)
			asideVal = (int) size;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, next);

	for (i = prev; i < asideVal; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);
		if (arr[i] == value)
			return (i);
	}

	return (-1);
}
