#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: an array
 * @size: is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: If no element matches, return -1,
 * otherwise  returns the index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
