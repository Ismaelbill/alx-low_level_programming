#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of number
 * @size: size of an array
 * @cmp: function pointer
 * Return: returns the index of the first element,
 * otherwise returns (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
