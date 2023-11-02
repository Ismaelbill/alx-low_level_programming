#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of array
 * @size: size of the  data type
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int result;
	void *ptr;
	char *c, zero = 0;

	result = sizeof(int) * nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(result + 1);
	if (ptr == 0)
		return (NULL);
	c = ptr;
	while(result--)
		*c++ = zero;

	return (ptr);
}
