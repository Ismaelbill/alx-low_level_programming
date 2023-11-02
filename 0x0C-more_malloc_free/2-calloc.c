#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of array
 * @size: size of the  data type
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int result, i;
	char *ptr;

	result = size * nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(result);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < result; i++)
		ptr[i] = 0;

	return (ptr);
}
